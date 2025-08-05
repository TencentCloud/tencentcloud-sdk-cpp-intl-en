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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYQUALITYCONTROLTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYQUALITYCONTROLTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlItemConfig.h>
#include <tencentcloud/mps/v20190612/model/QualityControlStrategy.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyQualityControlTemplate request structure.
                */
                class ModifyQualityControlTemplateRequest : public AbstractModel
                {
                public:
                    ModifyQualityControlTemplateRequest();
                    ~ModifyQualityControlTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of a media quality inspection template.
                     * @return Definition Unique identifier of a media quality inspection template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of a media quality inspection template.
                     * @param _definition Unique identifier of a media quality inspection template.
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
                     * 获取Media quality inspection template name, with a length limit of 64 characters.
                     * @return Name Media quality inspection template name, with a length limit of 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media quality inspection template name, with a length limit of 64 characters.
                     * @param _name Media quality inspection template name, with a length limit of 64 characters.
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
                     * 获取Template description, with a length limit of 256 characters.
                     * @return Comment Template description, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, with a length limit of 256 characters.
                     * @param _comment Template description, with a length limit of 256 characters.
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
                     * 获取Media quality inspection configuration parameters.
                     * @return QualityControlItemSet Media quality inspection configuration parameters.
                     * 
                     */
                    std::vector<QualityControlItemConfig> GetQualityControlItemSet() const;

                    /**
                     * 设置Media quality inspection configuration parameters.
                     * @param _qualityControlItemSet Media quality inspection configuration parameters.
                     * 
                     */
                    void SetQualityControlItemSet(const std::vector<QualityControlItemConfig>& _qualityControlItemSet);

                    /**
                     * 判断参数 QualityControlItemSet 是否已赋值
                     * @return QualityControlItemSet 是否已赋值
                     * 
                     */
                    bool QualityControlItemSetHasBeenSet() const;

                    /**
                     * 获取Recording file format. Valid values:
<li>PNG: PNG image.</li>
                     * @return RecordFormat Recording file format. Valid values:
<li>PNG: PNG image.</li>
                     * 
                     */
                    std::string GetRecordFormat() const;

                    /**
                     * 设置Recording file format. Valid values:
<li>PNG: PNG image.</li>
                     * @param _recordFormat Recording file format. Valid values:
<li>PNG: PNG image.</li>
                     * 
                     */
                    void SetRecordFormat(const std::string& _recordFormat);

                    /**
                     * 判断参数 RecordFormat 是否已赋值
                     * @return RecordFormat 是否已赋值
                     * 
                     */
                    bool RecordFormatHasBeenSet() const;

                    /**
                     * 获取Spot check policy for media quality inspection.
                     * @return Strategy Spot check policy for media quality inspection.
                     * 
                     */
                    QualityControlStrategy GetStrategy() const;

                    /**
                     * 设置Spot check policy for media quality inspection.
                     * @param _strategy Spot check policy for media quality inspection.
                     * 
                     */
                    void SetStrategy(const QualityControlStrategy& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of a media quality inspection template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Media quality inspection template name, with a length limit of 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Media quality inspection configuration parameters.
                     */
                    std::vector<QualityControlItemConfig> m_qualityControlItemSet;
                    bool m_qualityControlItemSetHasBeenSet;

                    /**
                     * Recording file format. Valid values:
<li>PNG: PNG image.</li>
                     */
                    std::string m_recordFormat;
                    bool m_recordFormatHasBeenSet;

                    /**
                     * Spot check policy for media quality inspection.
                     */
                    QualityControlStrategy m_strategy;
                    bool m_strategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYQUALITYCONTROLTEMPLATEREQUEST_H_
