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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Event Instance Information
                */
                class EventCaseDTO : public AbstractModel
                {
                public:
                    EventCaseDTO();
                    ~EventCaseDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event Instance ID
                     * @return CaseId Event Instance ID
                     * 
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置Event Instance ID
                     * @param _caseId Event Instance ID
                     * 
                     */
                    void SetCaseId(const std::string& _caseId);

                    /**
                     * 判断参数 CaseId 是否已赋值
                     * @return CaseId 是否已赋值
                     * 
                     */
                    bool CaseIdHasBeenSet() const;

                    /**
                     * 获取Event
                     * @return Name Event
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Event
                     * @param _name Event
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
                     * 获取Event Format
                     * @return Dimension Event Format
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置Event Format
                     * @param _dimension Event Format
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取Creation Time
                     * @return CreationTs Creation Time
                     * 
                     */
                    std::string GetCreationTs() const;

                    /**
                     * 设置Creation Time
                     * @param _creationTs Creation Time
                     * 
                     */
                    void SetCreationTs(const std::string& _creationTs);

                    /**
                     * 判断参数 CreationTs 是否已赋值
                     * @return CreationTs 是否已赋值
                     * 
                     */
                    bool CreationTsHasBeenSet() const;

                    /**
                     * 获取Consumer ID
                     * @return ConsumerId Consumer ID
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置Consumer ID
                     * @param _consumerId Consumer ID
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Event Instance ID
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * Event
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event Format
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * Creation Time
                     */
                    std::string m_creationTs;
                    bool m_creationTsHasBeenSet;

                    /**
                     * Consumer ID
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEDTO_H_
