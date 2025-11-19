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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMSERVICEMETRIC_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMSERVICEMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmField.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>
#include <tencentcloud/apm/v20210622/model/ServiceDetail.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * APM application metric information.
                */
                class ApmServiceMetric : public AbstractModel
                {
                public:
                    ApmServiceMetric();
                    ~ApmServiceMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fields Field array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApmField> GetFields() const;

                    /**
                     * 设置Field array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fields Field array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFields(const std::vector<ApmField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDetail Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ServiceDetail GetServiceDetail() const;

                    /**
                     * 设置Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceDetail Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceDetail(const ServiceDetail& _serviceDetail);

                    /**
                     * 判断参数 ServiceDetail 是否已赋值
                     * @return ServiceDetail 是否已赋值
                     * 
                     */
                    bool ServiceDetailHasBeenSet() const;

                private:

                    /**
                     * Field array.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApmField> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceDetail m_serviceDetail;
                    bool m_serviceDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMSERVICEMETRIC_H_
