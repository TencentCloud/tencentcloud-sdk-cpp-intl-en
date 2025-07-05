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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTOVERVIEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTOVERVIEW_H_

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
                * OverView object returned by the DescribeProductEventList API
                */
                class DescribeProductEventListOverView : public AbstractModel
                {
                public:
                    DescribeProductEventListOverView();
                    ~DescribeProductEventListOverView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of events whose statuses have changed.
Note: This field may return null, indicating that no valid value was found.
                     * @return StatusChangeAmount Number of events whose statuses have changed.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetStatusChangeAmount() const;

                    /**
                     * 设置Number of events whose statuses have changed.
Note: This field may return null, indicating that no valid value was found.
                     * @param _statusChangeAmount Number of events whose statuses have changed.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetStatusChangeAmount(const int64_t& _statusChangeAmount);

                    /**
                     * 判断参数 StatusChangeAmount 是否已赋值
                     * @return StatusChangeAmount 是否已赋值
                     * 
                     */
                    bool StatusChangeAmountHasBeenSet() const;

                    /**
                     * 获取Number of events whose alarm statuses are not configured.
Note: This field may return null, indicating that no valid value was found.
                     * @return UnConfigAlarmAmount Number of events whose alarm statuses are not configured.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetUnConfigAlarmAmount() const;

                    /**
                     * 设置Number of events whose alarm statuses are not configured.
Note: This field may return null, indicating that no valid value was found.
                     * @param _unConfigAlarmAmount Number of events whose alarm statuses are not configured.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetUnConfigAlarmAmount(const int64_t& _unConfigAlarmAmount);

                    /**
                     * 判断参数 UnConfigAlarmAmount 是否已赋值
                     * @return UnConfigAlarmAmount 是否已赋值
                     * 
                     */
                    bool UnConfigAlarmAmountHasBeenSet() const;

                    /**
                     * 获取Number of events with exceptions.
Note: This field may return null, indicating that no valid value was found.
                     * @return UnNormalEventAmount Number of events with exceptions.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetUnNormalEventAmount() const;

                    /**
                     * 设置Number of events with exceptions.
Note: This field may return null, indicating that no valid value was found.
                     * @param _unNormalEventAmount Number of events with exceptions.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetUnNormalEventAmount(const int64_t& _unNormalEventAmount);

                    /**
                     * 判断参数 UnNormalEventAmount 是否已赋值
                     * @return UnNormalEventAmount 是否已赋值
                     * 
                     */
                    bool UnNormalEventAmountHasBeenSet() const;

                    /**
                     * 获取Number of events that have not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     * @return UnRecoverAmount Number of events that have not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetUnRecoverAmount() const;

                    /**
                     * 设置Number of events that have not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     * @param _unRecoverAmount Number of events that have not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetUnRecoverAmount(const int64_t& _unRecoverAmount);

                    /**
                     * 判断参数 UnRecoverAmount 是否已赋值
                     * @return UnRecoverAmount 是否已赋值
                     * 
                     */
                    bool UnRecoverAmountHasBeenSet() const;

                private:

                    /**
                     * Number of events whose statuses have changed.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_statusChangeAmount;
                    bool m_statusChangeAmountHasBeenSet;

                    /**
                     * Number of events whose alarm statuses are not configured.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_unConfigAlarmAmount;
                    bool m_unConfigAlarmAmountHasBeenSet;

                    /**
                     * Number of events with exceptions.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_unNormalEventAmount;
                    bool m_unNormalEventAmountHasBeenSet;

                    /**
                     * Number of events that have not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_unRecoverAmount;
                    bool m_unRecoverAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTOVERVIEW_H_
