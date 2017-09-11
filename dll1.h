#ifndef DLL1_API
#define DLL1_API extern "C" _declspec (dllimport)
#endif
#include<Vfw.h>
#pragma comment(lib,"vfw32.lib")
unsigned char* buffer;//�ⲿ��Ҫʹ�õ��Ĵ洢frame���ڴ�ռ�

/**
	 * Camera ��ʼ��
	 * @param module ģ������    ��ģ�飺-1 ��IRģ�飺0��SLAMģ�飺1��CRģ�飺2��MARKERģ�飺3��WPģ�飺4
	 * @param mCameraID ���ID  ���������0��ǰ�������1
	 * @return falseʧ�ܣ�true�ɹ�
	 */
DLL1_API bool init(int module, int mCameraID);
/**
	 * ����Render
	 * @return falseʧ�ܣ�true�ɹ�
	 */

DLL1_API bool createRender();

/**
	 * ��ʼԤ��
	 * @return falseʧ�ܣ�true�ɹ�
	 */
DLL1_API bool startPreview();

/**
	 * �������Ԥ������
	 */
DLL1_API void UpdatePreview();

/**
	 * ��������ID
	 * @param textureID ����ID
	 */
DLL1_API void setTexture (int textureID);

/**
	 * ��ȡ����
	 * @return ��������
	 */
DLL1_API int* getTextures();

/**
	 * ��ȡ��Ļ���
	 * @return ��Ļ���
	 */
DLL1_API int getScreenWidth();

/**
	 * ��ȡ��Ļ�߶�
	 * @return ��Ļ�߶�
	 */
DLL1_API int getScreenHeight();

/**
	 * ��ȡ���Ԥ��ʱ��ͼƬ��ʽ
	 * @return ��ʽ����
	 */
DLL1_API int getCameraPreviewFormat();

/**
	 * ��ȡ���Ԥ��ʱ��ͼƬ�߶�
	 * @return ͼƬ�߶�
	 */
DLL1_API int getCameraPreviewHeight();

/**
	 * ��ȡ���Ԥ��ʱ��ͼƬ���
	 * @return ͼƬ���
	 */
DLL1_API int getCameraPreviewWidth();

/**
	 * ��ȡ���ʵ�������
	 * @return ������ֵ
	 */
DLL1_API int getSupportTextureWidth();

/**
	 * ��ȡ���ʵ�����߶�
	 * @return ����߶�ֵ
	 */
DLL1_API int getSupportTextureHeight();

	/**
	 * ��ȡcamera����ת�Ƕ�
	 * @return 
	 */
DLL1_API int getCameraRotaion();

/**
	 * ֹͣ�����Ԥ���ͻ������Ⱦ
	 */
DLL1_API void stop();