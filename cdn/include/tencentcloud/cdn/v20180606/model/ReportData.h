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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REPORTDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REPORTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CDN report data
                */
                class ReportData : public AbstractModel
                {
                public:
                    ReportData();
                    ~ReportData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID/domain name ID.
                     * @return ResourceId Project ID/domain name ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Project ID/domain name ID.
                     * @param _resourceId Project ID/domain name ID.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Project name/domain name.
                     * @return Resource Project name/domain name.
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Project name/domain name.
                     * @param _resource Project name/domain name.
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Total traffic/max bandwidth in bytes and bps, respectively.
                     * @return Value Total traffic/max bandwidth in bytes and bps, respectively.
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Total traffic/max bandwidth in bytes and bps, respectively.
                     * @param _value Total traffic/max bandwidth in bytes and bps, respectively.
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Percentage of individual resource out of all resources.
                     * @return Percentage Percentage of individual resource out of all resources.
                     * 
                     */
                    double GetPercentage() const;

                    /**
                     * 设置Percentage of individual resource out of all resources.
                     * @param _percentage Percentage of individual resource out of all resources.
                     * 
                     */
                    void SetPercentage(const double& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取Total billable traffic/max billable bandwidth in bytes and bps, respectively.
                     * @return BillingValue Total billable traffic/max billable bandwidth in bytes and bps, respectively.
                     * 
                     */
                    int64_t GetBillingValue() const;

                    /**
                     * 设置Total billable traffic/max billable bandwidth in bytes and bps, respectively.
                     * @param _billingValue Total billable traffic/max billable bandwidth in bytes and bps, respectively.
                     * 
                     */
                    void SetBillingValue(const int64_t& _billingValue);

                    /**
                     * 判断参数 BillingValue 是否已赋值
                     * @return BillingValue 是否已赋值
                     * 
                     */
                    bool BillingValueHasBeenSet() const;

                    /**
                     * 获取Percentage of billable amount out of total amount.
                     * @return BillingPercentage Percentage of billable amount out of total amount.
                     * 
                     */
                    double GetBillingPercentage() const;

                    /**
                     * 设置Percentage of billable amount out of total amount.
                     * @param _billingPercentage Percentage of billable amount out of total amount.
                     * 
                     */
                    void SetBillingPercentage(const double& _billingPercentage);

                    /**
                     * 判断参数 BillingPercentage 是否已赋值
                     * @return BillingPercentage 是否已赋值
                     * 
                     */
                    bool BillingPercentageHasBeenSet() const;

                private:

                    /**
                     * Project ID/domain name ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Project name/domain name.
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Total traffic/max bandwidth in bytes and bps, respectively.
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Percentage of individual resource out of all resources.
                     */
                    double m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * Total billable traffic/max billable bandwidth in bytes and bps, respectively.
                     */
                    int64_t m_billingValue;
                    bool m_billingValueHasBeenSet;

                    /**
                     * Percentage of billable amount out of total amount.
                     */
                    double m_billingPercentage;
                    bool m_billingPercentageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REPORTDATA_H_
