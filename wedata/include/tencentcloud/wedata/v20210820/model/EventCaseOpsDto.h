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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEOPSDTO_H_

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
                * EventCaseOpsDto
                */
                class EventCaseOpsDto : public AbstractModel
                {
                public:
                    EventCaseOpsDto();
                    ~EventCaseOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Case ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CaseId Case ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置Case ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _caseId Case ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Case Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Case Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Case Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Case Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取time format
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Dimension time format
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置time format
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dimension time format
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreationTimestamp Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreationTimestamp() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _creationTimestamp Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreationTimestamp(const std::string& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
                     */
                    bool CreationTimestampHasBeenSet() const;

                    /**
                     * 获取Consumer ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ConsumerId Consumer ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置Consumer ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _consumerId Consumer ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description DescriptionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * Case ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * Case Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * time format
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                    /**
                     * Consumer ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEOPSDTO_H_
