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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawAIDubbingParameter.h>
#include <tencentcloud/mps/v20190612/model/OverrideAIDubbingParameter.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/DstSubtitleInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI dubbing task
                */
                class AIDubbingTaskInput : public AbstractModel
                {
                public:
                    AIDubbingTaskInput();
                    ~AIDubbingTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI Dubbing template id.</p>
                     * @return Definition <p>AI Dubbing template id.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>AI Dubbing template id.</p>
                     * @param _definition <p>AI Dubbing template id.</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>Custom AI dubbing parameter. It takes effect when Definition is set to 0. This parameter is used in highly customized scenarios. We recommend that you use Definition to specify dubbing parameters.</p>
                     * @return RawParameter <p>Custom AI dubbing parameter. It takes effect when Definition is set to 0. This parameter is used in highly customized scenarios. We recommend that you use Definition to specify dubbing parameters.</p>
                     * 
                     */
                    RawAIDubbingParameter GetRawParameter() const;

                    /**
                     * 设置<p>Custom AI dubbing parameter. It takes effect when Definition is set to 0. This parameter is used in highly customized scenarios. We recommend that you use Definition to specify dubbing parameters.</p>
                     * @param _rawParameter <p>Custom AI dubbing parameter. It takes effect when Definition is set to 0. This parameter is used in highly customized scenarios. We recommend that you use Definition to specify dubbing parameters.</p>
                     * 
                     */
                    void SetRawParameter(const RawAIDubbingParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取<p>AI Dubbing custom parameters. Valid when Definition is not filled with 0. When some dubbing parameters in this structure are filled in, the filled parameters will be used to override the parameters in the AI Dubbing template. This parameter is used for highly customized scenarios. We recommend you use only Definition to specify dubbing parameters.</p>
                     * @return OverrideParameter <p>AI Dubbing custom parameters. Valid when Definition is not filled with 0. When some dubbing parameters in this structure are filled in, the filled parameters will be used to override the parameters in the AI Dubbing template. This parameter is used for highly customized scenarios. We recommend you use only Definition to specify dubbing parameters.</p>
                     * 
                     */
                    OverrideAIDubbingParameter GetOverrideParameter() const;

                    /**
                     * 设置<p>AI Dubbing custom parameters. Valid when Definition is not filled with 0. When some dubbing parameters in this structure are filled in, the filled parameters will be used to override the parameters in the AI Dubbing template. This parameter is used for highly customized scenarios. We recommend you use only Definition to specify dubbing parameters.</p>
                     * @param _overrideParameter <p>AI Dubbing custom parameters. Valid when Definition is not filled with 0. When some dubbing parameters in this structure are filled in, the filled parameters will be used to override the parameters in the AI Dubbing template. This parameter is used for highly customized scenarios. We recommend you use only Definition to specify dubbing parameters.</p>
                     * 
                     */
                    void SetOverrideParameter(const OverrideAIDubbingParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     * 
                     */
                    bool OverrideParameterHasBeenSet() const;

                    /**
                     * 获取<p>Target storage for the file. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
                     * @return OutputStorage <p>Target storage for the file. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Target storage for the file. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
                     * @param _outputStorage <p>Target storage for the file. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取<p>External source subtitle file information.</p>
                     * @return SrcSubtitleInfo <p>External source subtitle file information.</p>
                     * 
                     */
                    MediaInputInfo GetSrcSubtitleInfo() const;

                    /**
                     * 设置<p>External source subtitle file information.</p>
                     * @param _srcSubtitleInfo <p>External source subtitle file information.</p>
                     * 
                     */
                    void SetSrcSubtitleInfo(const MediaInputInfo& _srcSubtitleInfo);

                    /**
                     * 判断参数 SrcSubtitleInfo 是否已赋值
                     * @return SrcSubtitleInfo 是否已赋值
                     * 
                     */
                    bool SrcSubtitleInfoHasBeenSet() const;

                    /**
                     * 获取<p>External subtitle file information, translated subtitles.</p>
                     * @return DstSubtitleInfos <p>External subtitle file information, translated subtitles.</p>
                     * 
                     */
                    std::vector<DstSubtitleInput> GetDstSubtitleInfos() const;

                    /**
                     * 设置<p>External subtitle file information, translated subtitles.</p>
                     * @param _dstSubtitleInfos <p>External subtitle file information, translated subtitles.</p>
                     * 
                     */
                    void SetDstSubtitleInfos(const std::vector<DstSubtitleInput>& _dstSubtitleInfos);

                    /**
                     * 判断参数 DstSubtitleInfos 是否已赋值
                     * @return DstSubtitleInfos 是否已赋值
                     * 
                     */
                    bool DstSubtitleInfosHasBeenSet() const;

                    /**
                     * 获取<p>Output path of the file, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li><p><strong>Note</strong>: The <code>BatchProcessMedia</code> API is currently not supported.</p>
                     * @return OutputObjectPath <p>Output path of the file, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li><p><strong>Note</strong>: The <code>BatchProcessMedia</code> API is currently not supported.</p>
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置<p>Output path of the file, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li><p><strong>Note</strong>: The <code>BatchProcessMedia</code> API is currently not supported.</p>
                     * @param _outputObjectPath <p>Output path of the file, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li><p><strong>Note</strong>: The <code>BatchProcessMedia</code> API is currently not supported.</p>
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取<p>Additional parameters for AI Dubbing, serialized json string.</p>
                     * @return ExtendedParameter <p>Additional parameters for AI Dubbing, serialized json string.</p>
                     * 
                     */
                    std::string GetExtendedParameter() const;

                    /**
                     * 设置<p>Additional parameters for AI Dubbing, serialized json string.</p>
                     * @param _extendedParameter <p>Additional parameters for AI Dubbing, serialized json string.</p>
                     * 
                     */
                    void SetExtendedParameter(const std::string& _extendedParameter);

                    /**
                     * 判断参数 ExtendedParameter 是否已赋值
                     * @return ExtendedParameter 是否已赋值
                     * 
                     */
                    bool ExtendedParameterHasBeenSet() const;

                    /**
                     * 获取<p>ID of the associated drama series.<br>Note: This value takes effect when dubbing mode is intelligent dubbing by role.</p>
                     * @return DramaId <p>ID of the associated drama series.<br>Note: This value takes effect when dubbing mode is intelligent dubbing by role.</p>
                     * 
                     */
                    std::string GetDramaId() const;

                    /**
                     * 设置<p>ID of the associated drama series.<br>Note: This value takes effect when dubbing mode is intelligent dubbing by role.</p>
                     * @param _dramaId <p>ID of the associated drama series.<br>Note: This value takes effect when dubbing mode is intelligent dubbing by role.</p>
                     * 
                     */
                    void SetDramaId(const std::string& _dramaId);

                    /**
                     * 判断参数 DramaId 是否已赋值
                     * @return DramaId 是否已赋值
                     * 
                     */
                    bool DramaIdHasBeenSet() const;

                private:

                    /**
                     * <p>AI Dubbing template id.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Custom AI dubbing parameter. It takes effect when Definition is set to 0. This parameter is used in highly customized scenarios. We recommend that you use Definition to specify dubbing parameters.</p>
                     */
                    RawAIDubbingParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * <p>AI Dubbing custom parameters. Valid when Definition is not filled with 0. When some dubbing parameters in this structure are filled in, the filled parameters will be used to override the parameters in the AI Dubbing template. This parameter is used for highly customized scenarios. We recommend you use only Definition to specify dubbing parameters.</p>
                     */
                    OverrideAIDubbingParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * <p>Target storage for the file. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>External source subtitle file information.</p>
                     */
                    MediaInputInfo m_srcSubtitleInfo;
                    bool m_srcSubtitleInfoHasBeenSet;

                    /**
                     * <p>External subtitle file information, translated subtitles.</p>
                     */
                    std::vector<DstSubtitleInput> m_dstSubtitleInfos;
                    bool m_dstSubtitleInfosHasBeenSet;

                    /**
                     * <p>Output path of the file, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li><p><strong>Note</strong>: The <code>BatchProcessMedia</code> API is currently not supported.</p>
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * <p>Additional parameters for AI Dubbing, serialized json string.</p>
                     */
                    std::string m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                    /**
                     * <p>ID of the associated drama series.<br>Note: This value takes effect when dubbing mode is intelligent dubbing by role.</p>
                     */
                    std::string m_dramaId;
                    bool m_dramaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKINPUT_H_
