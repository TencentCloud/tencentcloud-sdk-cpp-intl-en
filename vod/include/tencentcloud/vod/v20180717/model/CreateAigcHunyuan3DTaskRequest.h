/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCHUNYUAN3DTASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCHUNYUAN3DTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DReferenceImageInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DMultiViewImageInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DMeshInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcHunyuan3DTask request structure.
                */
                class CreateAigcHunyuan3DTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcHunyuan3DTaskRequest();
                    ~CreateAigcHunyuan3DTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID to access resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID to access resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID to access resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID to access resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Reference image information for generating a 3D model.</p><p>Input parameter limitation: The maximum array length is 1.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     * @return ImageInfos <p>Reference image information for generating a 3D model.</p><p>Input parameter limitation: The maximum array length is 1.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>Reference image information for generating a 3D model.</p><p>Input parameter limitation: The maximum array length is 1.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     * @param _imageInfos <p>Reference image information for generating a 3D model.</p><p>Input parameter limitation: The maximum array length is 1.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     * 
                     */
                    void SetImageInfos(const std::vector<AigcHunyuan3DReferenceImageInfo>& _imageInfos);

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>Multi-perspective image information used to generate a 3D model.</p><p>Input limits: The array length must be between 2 and 8, and the front perspective must be included.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive with each other. One and only one must be filled in.</p>
                     * @return MultiViewImageInfos <p>Multi-perspective image information used to generate a 3D model.</p><p>Input limits: The array length must be between 2 and 8, and the front perspective must be included.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive with each other. One and only one must be filled in.</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DMultiViewImageInfo> GetMultiViewImageInfos() const;

                    /**
                     * 设置<p>Multi-perspective image information used to generate a 3D model.</p><p>Input limits: The array length must be between 2 and 8, and the front perspective must be included.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive with each other. One and only one must be filled in.</p>
                     * @param _multiViewImageInfos <p>Multi-perspective image information used to generate a 3D model.</p><p>Input limits: The array length must be between 2 and 8, and the front perspective must be included.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive with each other. One and only one must be filled in.</p>
                     * 
                     */
                    void SetMultiViewImageInfos(const std::vector<AigcHunyuan3DMultiViewImageInfo>& _multiViewImageInfos);

                    /**
                     * 判断参数 MultiViewImageInfos 是否已赋值
                     * @return MultiViewImageInfos 是否已赋值
                     * 
                     */
                    bool MultiViewImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>Prompt for generating a 3D model.</p><p>Input parameter limit: up to 1024 utf-8 characters.</p><p>ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     * @return Prompt <p>Prompt for generating a 3D model.</p><p>Input parameter limit: up to 1024 utf-8 characters.</p><p>ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for generating a 3D model.</p><p>Input parameter limit: up to 1024 utf-8 characters.</p><p>ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     * @param _prompt <p>Prompt for generating a 3D model.</p><p>Input parameter limit: up to 1024 utf-8 characters.</p><p>ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only the geometry (no texture, faster output speed);</li><li>Texture: Generate only the texture (requires filling in MeshInfos)</li></ul><p>Default value: Normal</p>
                     * @return GenerateType <p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only the geometry (no texture, faster output speed);</li><li>Texture: Generate only the texture (requires filling in MeshInfos)</li></ul><p>Default value: Normal</p>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置<p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only the geometry (no texture, faster output speed);</li><li>Texture: Generate only the texture (requires filling in MeshInfos)</li></ul><p>Default value: Normal</p>
                     * @param _generateType <p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only the geometry (no texture, faster output speed);</li><li>Texture: Generate only the texture (requires filling in MeshInfos)</li></ul><p>Default value: Normal</p>
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取<p>Reference 3D model used to generate a 3D model.</p><p>Input parameter limit: when MeshInfos is filled in, GenerateType must be Texture (texture scenario).</p>
                     * @return MeshInfos <p>Reference 3D model used to generate a 3D model.</p><p>Input parameter limit: when MeshInfos is filled in, GenerateType must be Texture (texture scenario).</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DMeshInfo> GetMeshInfos() const;

                    /**
                     * 设置<p>Reference 3D model used to generate a 3D model.</p><p>Input parameter limit: when MeshInfos is filled in, GenerateType must be Texture (texture scenario).</p>
                     * @param _meshInfos <p>Reference 3D model used to generate a 3D model.</p><p>Input parameter limit: when MeshInfos is filled in, GenerateType must be Texture (texture scenario).</p>
                     * 
                     */
                    void SetMeshInfos(const std::vector<AigcHunyuan3DMeshInfo>& _meshInfos);

                    /**
                     * 判断参数 MeshInfos 是否已赋值
                     * @return MeshInfos 是否已赋值
                     * 
                     */
                    bool MeshInfosHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable output PBR materials.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul><p>Default value: Disabled</p>
                     * @return EnablePBR <p>Whether to enable output PBR materials.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul><p>Default value: Disabled</p>
                     * 
                     */
                    std::string GetEnablePBR() const;

                    /**
                     * 设置<p>Whether to enable output PBR materials.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul><p>Default value: Disabled</p>
                     * @param _enablePBR <p>Whether to enable output PBR materials.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul><p>Default value: Disabled</p>
                     * 
                     */
                    void SetEnablePBR(const std::string& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                    /**
                     * 获取<p>Number of patches. This parameter is valid only when GenerateType is Normal or Geometry.</p><p>Value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     * @return FaceCount <p>Number of patches. This parameter is valid only when GenerateType is Normal or Geometry.</p><p>Value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     * 
                     */
                    int64_t GetFaceCount() const;

                    /**
                     * 设置<p>Number of patches. This parameter is valid only when GenerateType is Normal or Geometry.</p><p>Value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     * @param _faceCount <p>Number of patches. This parameter is valid only when GenerateType is Normal or Geometry.</p><p>Value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     * 
                     */
                    void SetFaceCount(const int64_t& _faceCount);

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: retained;</li><li>Disabled: not retain.</li></ul><p>Default value: Disabled</p>
                     * @return KeepUV <p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: retained;</li><li>Disabled: not retain.</li></ul><p>Default value: Disabled</p>
                     * 
                     */
                    std::string GetKeepUV() const;

                    /**
                     * 设置<p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: retained;</li><li>Disabled: not retain.</li></ul><p>Default value: Disabled</p>
                     * @param _keepUV <p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: retained;</li><li>Disabled: not retain.</li></ul><p>Default value: Disabled</p>
                     * 
                     */
                    void SetKeepUV(const std::string& _keepUV);

                    /**
                     * 判断参数 KeepUV 是否已赋值
                     * @return KeepUV 是否已赋值
                     * 
                     */
                    bool KeepUVHasBeenSet() const;

                    /**
                     * 获取<p>Result format. An extra output format in addition to the default return of obj and glb.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     * @return ResultFormat <p>Result format. An extra output format in addition to the default return of obj and glb.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     * 
                     */
                    std::string GetResultFormat() const;

                    /**
                     * 设置<p>Result format. An extra output format in addition to the default return of obj and glb.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     * @param _resultFormat <p>Result format. An extra output format in addition to the default return of obj and glb.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     * 
                     */
                    void SetResultFormat(const std::string& _resultFormat);

                    /**
                     * 判断参数 ResultFormat 是否已赋值
                     * @return ResultFormat 是否已赋值
                     * 
                     */
                    bool ResultFormatHasBeenSet() const;

                    /**
                     * 获取<p>Random Seed. Results are reproducible with the same Seed input.</p><p>Value range: [0, 2147483647]</p>
                     * @return Seed <p>Random Seed. Results are reproducible with the same Seed input.</p><p>Value range: [0, 2147483647]</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>Random Seed. Results are reproducible with the same Seed input.</p><p>Value range: [0, 2147483647]</p>
                     * @param _seed <p>Random Seed. Results are reproducible with the same Seed input.</p><p>Value range: [0, 2147483647]</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>Style control words.</p>
                     * @return Style <p>Style control words.</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>Style control words.</p>
                     * @param _style <p>Style control words.</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>Configuration of the output media file of the task.</p>
                     * @return OutputConfig <p>Configuration of the output media file of the task.</p>
                     * 
                     */
                    AigcHunyuan3DOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Configuration of the output media file of the task.</p>
                     * @param _outputConfig <p>Configuration of the output media file of the task.</p>
                     * 
                     */
                    void SetOutputConfig(const AigcHunyuan3DOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Source context, used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. It can contain up to 1000 characters.</p>
                     * @return SessionContext <p>Source context, used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. It can contain up to 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context, used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. It can contain up to 1000 characters.</p>
                     * @param _sessionContext <p>Source context, used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. It can contain up to 1000 characters.</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                private:

                    /**
                     * <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID to access resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Reference image information for generating a 3D model.</p><p>Input parameter limitation: The maximum array length is 1.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     */
                    std::vector<AigcHunyuan3DReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * <p>Multi-perspective image information used to generate a 3D model.</p><p>Input limits: The array length must be between 2 and 8, and the front perspective must be included.</p><p>The three input parameters ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive with each other. One and only one must be filled in.</p>
                     */
                    std::vector<AigcHunyuan3DMultiViewImageInfo> m_multiViewImageInfos;
                    bool m_multiViewImageInfosHasBeenSet;

                    /**
                     * <p>Prompt for generating a 3D model.</p><p>Input parameter limit: up to 1024 utf-8 characters.</p><p>ImageInfos, MultiViewImageInfos, and Prompt are mutually exclusive. One and only one must be filled in.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only the geometry (no texture, faster output speed);</li><li>Texture: Generate only the texture (requires filling in MeshInfos)</li></ul><p>Default value: Normal</p>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>Reference 3D model used to generate a 3D model.</p><p>Input parameter limit: when MeshInfos is filled in, GenerateType must be Texture (texture scenario).</p>
                     */
                    std::vector<AigcHunyuan3DMeshInfo> m_meshInfos;
                    bool m_meshInfosHasBeenSet;

                    /**
                     * <p>Whether to enable output PBR materials.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul><p>Default value: Disabled</p>
                     */
                    std::string m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * <p>Number of patches. This parameter is valid only when GenerateType is Normal or Geometry.</p><p>Value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     */
                    int64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * <p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: retained;</li><li>Disabled: not retain.</li></ul><p>Default value: Disabled</p>
                     */
                    std::string m_keepUV;
                    bool m_keepUVHasBeenSet;

                    /**
                     * <p>Result format. An extra output format in addition to the default return of obj and glb.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     */
                    std::string m_resultFormat;
                    bool m_resultFormatHasBeenSet;

                    /**
                     * <p>Random Seed. Results are reproducible with the same Seed input.</p><p>Value range: [0, 2147483647]</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>Style control words.</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>Configuration of the output media file of the task.</p>
                     */
                    AigcHunyuan3DOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context, used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. It can contain up to 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCHUNYUAN3DTASKREQUEST_H_
