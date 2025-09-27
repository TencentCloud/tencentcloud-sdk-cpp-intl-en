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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEALARMSREQUEST_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEALARMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * DescribeAlarms request structure.
                */
                class DescribeAlarmsRequest : public AbstractModel
                {
                public:
                    DescribeAlarmsRequest();
                    ~DescribeAlarmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of items per page. maximum 100.
                     * @return Limit Number of items per page. maximum 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. maximum 100.
                     * @param _limit Number of items per page. maximum 100.
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
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取Product ID.
                     * @return ProductId Product ID.
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置Product ID.
                     * @param _productId Product ID.
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Quota ID.
                     * @return QuotaId Quota ID.
                     * 
                     */
                    int64_t GetQuotaId() const;

                    /**
                     * 设置Quota ID.
                     * @param _quotaId Quota ID.
                     * 
                     */
                    void SetQuotaId(const int64_t& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取Alarm, quota name.
                     * @return Content Alarm, quota name.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Alarm, quota name.
                     * @param _content Alarm, quota name.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Member uins.
                     * @return MemberUins Member uins.
                     * 
                     */
                    std::vector<int64_t> GetMemberUins() const;

                    /**
                     * 设置Member uins.
                     * @param _memberUins Member uins.
                     * 
                     */
                    void SetMemberUins(const std::vector<int64_t>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                    /**
                     * 获取AlAlarm metric.
                     * @return Metrics AlAlarm metric.
                     * 
                     */
                    int64_t GetMetrics() const;

                    /**
                     * 设置AlAlarm metric.
                     * @param _metrics AlAlarm metric.
                     * 
                     */
                    void SetMetrics(const int64_t& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Number of items per page. maximum 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Product ID.
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Quota ID.
                     */
                    int64_t m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * Alarm, quota name.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Member uins.
                     */
                    std::vector<int64_t> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                    /**
                     * AlAlarm metric.
                     */
                    int64_t m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEALARMSREQUEST_H_
