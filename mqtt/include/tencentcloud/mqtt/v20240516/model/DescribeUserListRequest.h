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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEUSERLISTREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEUSERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/Filter.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeUserList request structure.
                */
                class DescribeUserListRequest : public AbstractModel
                {
                public:
                    DescribeUserListRequest();
                    ~DescribeUserListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @return InstanceId Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @param _instanceId Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the supported fields in the query criteria list.
Username: specifies the Username for filtering, supports fuzzy filtering. type: String.
                     * @return Filters Specifies the supported fields in the query criteria list.
Username: specifies the Username for filtering, supports fuzzy filtering. type: String.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Specifies the supported fields in the query criteria list.
Username: specifies the Username for filtering, supports fuzzy filtering. type: String.
                     * @param _filters Specifies the supported fields in the query criteria list.
Username: specifies the Username for filtering, supports fuzzy filtering. type: String.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Query start position. default value: 0.
                     * @return Offset Query start position. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Query start position. default value: 0.
                     * @param _offset Query start position. default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Specifies the query result limit count. default value: 20. maximum value: 100.
                     * @return Limit Specifies the query result limit count. default value: 20. maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Specifies the query result limit count. default value: 20. maximum value: 100.
                     * @param _limit Specifies the query result limit count. default value: 20. maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the supported fields in the query criteria list.
Username: specifies the Username for filtering, supports fuzzy filtering. type: String.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query start position. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Specifies the query result limit count. default value: 20. maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEUSERLISTREQUEST_H_
