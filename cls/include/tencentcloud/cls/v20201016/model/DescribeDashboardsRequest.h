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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>
#include <tencentcloud/cls/v20201016/model/TopicIdAndRegion.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeDashboards request structure.
                */
                class DescribeDashboardsRequest : public AbstractModel
                {
                public:
                    DescribeDashboardsRequest();
                    ~DescribeDashboardsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page offset. Default value: 0
                     * @return Offset Page offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0
                     * @param _offset Page offset. Default value: 0
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
                     * 获取Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @return Limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @param _limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取-dashboardId filter by [dashboard id], type: String, required: No.
-Example value: dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
-dashboardName: Filter by fuzzy search as dashboard name. Type: String. Required: No.
-Example value: Business dashboard
-dashboardRegion filter by dashboard region (compatible with legacy dashboards). This property for dashboards created via cloud API, type: String, required: No.
-See [Regions and Availability Zones](https://www.tencentcloud.com/document/product/614/18940?from_cn_redirect=1)
-Example: ap-guangzhou
- tagKey - String - Required: No - Filter by the tag key.
-Example value:
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

-tag:tagKey Filter by [tag key-value pair]. Replace tagKey with a specific tag key. Type: String. Required: No.
-Refer to [Example 1](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1#4.-.E7.A4.BA.E4.BE.8B) for usage.
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @return Filters -dashboardId filter by [dashboard id], type: String, required: No.
-Example value: dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
-dashboardName: Filter by fuzzy search as dashboard name. Type: String. Required: No.
-Example value: Business dashboard
-dashboardRegion filter by dashboard region (compatible with legacy dashboards). This property for dashboards created via cloud API, type: String, required: No.
-See [Regions and Availability Zones](https://www.tencentcloud.com/document/product/614/18940?from_cn_redirect=1)
-Example: ap-guangzhou
- tagKey - String - Required: No - Filter by the tag key.
-Example value:
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

-tag:tagKey Filter by [tag key-value pair]. Replace tagKey with a specific tag key. Type: String. Required: No.
-Refer to [Example 1](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1#4.-.E7.A4.BA.E4.BE.8B) for usage.
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置-dashboardId filter by [dashboard id], type: String, required: No.
-Example value: dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
-dashboardName: Filter by fuzzy search as dashboard name. Type: String. Required: No.
-Example value: Business dashboard
-dashboardRegion filter by dashboard region (compatible with legacy dashboards). This property for dashboards created via cloud API, type: String, required: No.
-See [Regions and Availability Zones](https://www.tencentcloud.com/document/product/614/18940?from_cn_redirect=1)
-Example: ap-guangzhou
- tagKey - String - Required: No - Filter by the tag key.
-Example value:
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

-tag:tagKey Filter by [tag key-value pair]. Replace tagKey with a specific tag key. Type: String. Required: No.
-Refer to [Example 1](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1#4.-.E7.A4.BA.E4.BE.8B) for usage.
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @param _filters -dashboardId filter by [dashboard id], type: String, required: No.
-Example value: dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
-dashboardName: Filter by fuzzy search as dashboard name. Type: String. Required: No.
-Example value: Business dashboard
-dashboardRegion filter by dashboard region (compatible with legacy dashboards). This property for dashboards created via cloud API, type: String, required: No.
-See [Regions and Availability Zones](https://www.tencentcloud.com/document/product/614/18940?from_cn_redirect=1)
-Example: ap-guangzhou
- tagKey - String - Required: No - Filter by the tag key.
-Example value:
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

-tag:tagKey Filter by [tag key-value pair]. Replace tagKey with a specific tag key. Type: String. Required: No.
-Refer to [Example 1](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1#4.-.E7.A4.BA.E4.BE.8B) for usage.
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
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
                     * 获取Filter is performed by topicId and regionId.
-topicId: Log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/42783).
-Example value: 439a5304-08f9-484b-9c4d-46ff57133816
- regionId
- 1: Guangzhou
-4: Shanghai
-5: Hong Kong (China)
- 7: Shanghai Finance
- 8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
- 16: Chengdu
- 17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: Sao Paulo
-78: Shanghai Autonomous Driving Cloud

                     * @return TopicIdRegionFilter Filter is performed by topicId and regionId.
-topicId: Log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/42783).
-Example value: 439a5304-08f9-484b-9c4d-46ff57133816
- regionId
- 1: Guangzhou
-4: Shanghai
-5: Hong Kong (China)
- 7: Shanghai Finance
- 8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
- 16: Chengdu
- 17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: Sao Paulo
-78: Shanghai Autonomous Driving Cloud

                     * 
                     */
                    std::vector<TopicIdAndRegion> GetTopicIdRegionFilter() const;

                    /**
                     * 设置Filter is performed by topicId and regionId.
-topicId: Log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/42783).
-Example value: 439a5304-08f9-484b-9c4d-46ff57133816
- regionId
- 1: Guangzhou
-4: Shanghai
-5: Hong Kong (China)
- 7: Shanghai Finance
- 8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
- 16: Chengdu
- 17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: Sao Paulo
-78: Shanghai Autonomous Driving Cloud

                     * @param _topicIdRegionFilter Filter is performed by topicId and regionId.
-topicId: Log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/42783).
-Example value: 439a5304-08f9-484b-9c4d-46ff57133816
- regionId
- 1: Guangzhou
-4: Shanghai
-5: Hong Kong (China)
- 7: Shanghai Finance
- 8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
- 16: Chengdu
- 17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: Sao Paulo
-78: Shanghai Autonomous Driving Cloud

                     * 
                     */
                    void SetTopicIdRegionFilter(const std::vector<TopicIdAndRegion>& _topicIdRegionFilter);

                    /**
                     * 判断参数 TopicIdRegionFilter 是否已赋值
                     * @return TopicIdRegionFilter 是否已赋值
                     * 
                     */
                    bool TopicIdRegionFilterHasBeenSet() const;

                private:

                    /**
                     * Page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * -dashboardId filter by [dashboard id], type: String, required: No.
-Example value: dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
-dashboardName: Filter by fuzzy search as dashboard name. Type: String. Required: No.
-Example value: Business dashboard
-dashboardRegion filter by dashboard region (compatible with legacy dashboards). This property for dashboards created via cloud API, type: String, required: No.
-See [Regions and Availability Zones](https://www.tencentcloud.com/document/product/614/18940?from_cn_redirect=1)
-Example: ap-guangzhou
- tagKey - String - Required: No - Filter by the tag key.
-Example value:
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

-tag:tagKey Filter by [tag key-value pair]. Replace tagKey with a specific tag key. Type: String. Required: No.
-Refer to [Example 1](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1#4.-.E7.A4.BA.E4.BE.8B) for usage.
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Filter is performed by topicId and regionId.
-topicId: Log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/42783).
-Example value: 439a5304-08f9-484b-9c4d-46ff57133816
- regionId
- 1: Guangzhou
-4: Shanghai
-5: Hong Kong (China)
- 7: Shanghai Finance
- 8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
- 16: Chengdu
- 17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: Sao Paulo
-78: Shanghai Autonomous Driving Cloud

                     */
                    std::vector<TopicIdAndRegion> m_topicIdRegionFilter;
                    bool m_topicIdRegionFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSREQUEST_H_
