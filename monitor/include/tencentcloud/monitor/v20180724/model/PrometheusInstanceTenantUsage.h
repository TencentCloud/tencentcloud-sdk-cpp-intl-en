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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCETENANTUSAGE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCETENANTUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * TMP usage information
                */
                class PrometheusInstanceTenantUsage : public AbstractModel
                {
                public:
                    PrometheusInstanceTenantUsage();
                    ~PrometheusInstanceTenantUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CalcDate Billing cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCalcDate() const;

                    /**
                     * 设置Billing cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _calcDate Billing cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCalcDate(const std::string& _calcDate);

                    /**
                     * 判断参数 CalcDate 是否已赋值
                     * @return CalcDate 是否已赋值
                     * 
                     */
                    bool CalcDateHasBeenSet() const;

                    /**
                     * 获取Total usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Total Total usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetTotal() const;

                    /**
                     * 设置Total usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _total Total usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotal(const double& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Usage of basic (free) metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Basic Usage of basic (free) metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetBasic() const;

                    /**
                     * 设置Usage of basic (free) metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _basic Usage of basic (free) metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBasic(const double& _basic);

                    /**
                     * 判断参数 Basic 是否已赋值
                     * @return Basic 是否已赋值
                     * 
                     */
                    bool BasicHasBeenSet() const;

                    /**
                     * 获取Usage of paid metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fee Usage of paid metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFee() const;

                    /**
                     * 设置Usage of paid metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fee Usage of paid metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFee(const double& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     * 
                     */
                    bool FeeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Billing cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_calcDate;
                    bool m_calcDateHasBeenSet;

                    /**
                     * Total usage
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Usage of basic (free) metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_basic;
                    bool m_basicHasBeenSet;

                    /**
                     * Usage of paid metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_fee;
                    bool m_feeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCETENANTUSAGE_H_
