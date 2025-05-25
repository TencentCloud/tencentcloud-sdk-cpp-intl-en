/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDTEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/HLSConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/MP4ConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Live recording template details
                */
                class LiveRecordTemplate : public AbstractModel
                {
                public:
                    LiveRecordTemplate();
                    ~LiveRecordTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the recording template unique identifier.
                     * @return Definition Specifies the recording template unique identifier.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Specifies the recording template unique identifier.
                     * @param _definition Specifies the recording template unique identifier.
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
                     * 获取HLS configuration parameters
                     * @return HLSConfigure HLS configuration parameters
                     * 
                     */
                    HLSConfigureInfo GetHLSConfigure() const;

                    /**
                     * 设置HLS configuration parameters
                     * @param _hLSConfigure HLS configuration parameters
                     * 
                     */
                    void SetHLSConfigure(const HLSConfigureInfo& _hLSConfigure);

                    /**
                     * 判断参数 HLSConfigure 是否已赋值
                     * @return HLSConfigure 是否已赋值
                     * 
                     */
                    bool HLSConfigureHasBeenSet() const;

                    /**
                     * 获取MP4 configuration parameter.
                     * @return MP4Configure MP4 configuration parameter.
                     * 
                     */
                    MP4ConfigureInfo GetMP4Configure() const;

                    /**
                     * 设置MP4 configuration parameter.
                     * @param _mP4Configure MP4 configuration parameter.
                     * 
                     */
                    void SetMP4Configure(const MP4ConfigureInfo& _mP4Configure);

                    /**
                     * 判断参数 MP4Configure 是否已赋值
                     * @return MP4Configure 是否已赋值
                     * 
                     */
                    bool MP4ConfigureHasBeenSet() const;

                    /**
                     * 获取Recording template name.
                     * @return Name Recording template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Recording template name.
                     * @param _name Recording template name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Template description.

                     * @return Comment Template description.

                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description.

                     * @param _comment Template description.

                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Template type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: Custom template.</li>
                     * @return Type Template type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: Custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: Custom template.</li>
                     * @param _type Template type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: Custom template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return CreateTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _createTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return UpdateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _updateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Specifies the recording template unique identifier.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * HLS configuration parameters
                     */
                    HLSConfigureInfo m_hLSConfigure;
                    bool m_hLSConfigureHasBeenSet;

                    /**
                     * MP4 configuration parameter.
                     */
                    MP4ConfigureInfo m_mP4Configure;
                    bool m_mP4ConfigureHasBeenSet;

                    /**
                     * Recording template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description.

                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Template type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: Custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDTEMPLATE_H_
