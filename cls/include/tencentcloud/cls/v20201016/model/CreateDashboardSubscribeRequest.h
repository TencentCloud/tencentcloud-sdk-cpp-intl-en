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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDASHBOARDSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDASHBOARDSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DashboardSubscribeData.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateDashboardSubscribe request structure.
                */
                class CreateDashboardSubscribeRequest : public AbstractModel
                {
                public:
                    CreateDashboardSubscribeRequest();
                    ~CreateDashboardSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dashboard subscription name.
Input limit:
-Cannot be empty
-Length cannot exceed 128 bytes
-Cannot contain character '|'
                     * @return Name Dashboard subscription name.
Input limit:
-Cannot be empty
-Length cannot exceed 128 bytes
-Cannot contain character '|'
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Dashboard subscription name.
Input limit:
-Cannot be empty
-Length cannot exceed 128 bytes
-Cannot contain character '|'
                     * @param _name Dashboard subscription name.
Input limit:
-Cannot be empty
-Length cannot exceed 128 bytes
-Cannot contain character '|'
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
                     * 获取Dashboard Id.
-Get the dashboard Id by [searching for the dashboard](https://www.tencentcloud.com/document/product/614/95636?from_cn_redirect=1).
                     * @return DashboardId Dashboard Id.
-Get the dashboard Id by [searching for the dashboard](https://www.tencentcloud.com/document/product/614/95636?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置Dashboard Id.
-Get the dashboard Id by [searching for the dashboard](https://www.tencentcloud.com/document/product/614/95636?from_cn_redirect=1).
                     * @param _dashboardId Dashboard Id.
-Get the dashboard Id by [searching for the dashboard](https://www.tencentcloud.com/document/product/614/95636?from_cn_redirect=1).
                     * 
                     */
                    void SetDashboardId(const std::string& _dashboardId);

                    /**
                     * 判断参数 DashboardId 是否已赋值
                     * @return DashboardId 是否已赋值
                     * 
                     */
                    bool DashboardIdHasBeenSet() const;

                    /**
                     * 获取Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
-{seconds} Value ranges from 0 to 59. 
-{Minutes} Value ranges from 0 to 59. 
-Hour. Value ranges from 0 to 23. 
-{Date} value ranges from 1 to 31 AND (last day of month: L) 
-{Month} value ranges from 1 to 12. 
-Week value ranges from 0 to 6 [0:Sunday, 6:Saturday]
                     * @return Cron Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
-{seconds} Value ranges from 0 to 59. 
-{Minutes} Value ranges from 0 to 59. 
-Hour. Value ranges from 0 to 23. 
-{Date} value ranges from 1 to 31 AND (last day of month: L) 
-{Month} value ranges from 1 to 12. 
-Week value ranges from 0 to 6 [0:Sunday, 6:Saturday]
                     * 
                     */
                    std::string GetCron() const;

                    /**
                     * 设置Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
-{seconds} Value ranges from 0 to 59. 
-{Minutes} Value ranges from 0 to 59. 
-Hour. Value ranges from 0 to 23. 
-{Date} value ranges from 1 to 31 AND (last day of month: L) 
-{Month} value ranges from 1 to 12. 
-Week value ranges from 0 to 6 [0:Sunday, 6:Saturday]
                     * @param _cron Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
-{seconds} Value ranges from 0 to 59. 
-{Minutes} Value ranges from 0 to 59. 
-Hour. Value ranges from 0 to 23. 
-{Date} value ranges from 1 to 31 AND (last day of month: L) 
-{Month} value ranges from 1 to 12. 
-Week value ranges from 0 to 6 [0:Sunday, 6:Saturday]
                     * 
                     */
                    void SetCron(const std::string& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     * 
                     */
                    bool CronHasBeenSet() const;

                    /**
                     * 获取Dashboard subscription data.
                     * @return SubscribeData Dashboard subscription data.
                     * 
                     */
                    DashboardSubscribeData GetSubscribeData() const;

                    /**
                     * 设置Dashboard subscription data.
                     * @param _subscribeData Dashboard subscription data.
                     * 
                     */
                    void SetSubscribeData(const DashboardSubscribeData& _subscribeData);

                    /**
                     * 判断参数 SubscribeData 是否已赋值
                     * @return SubscribeData 是否已赋值
                     * 
                     */
                    bool SubscribeDataHasBeenSet() const;

                private:

                    /**
                     * Dashboard subscription name.
Input limit:
-Cannot be empty
-Length cannot exceed 128 bytes
-Cannot contain character '|'
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Dashboard Id.
-Get the dashboard Id by [searching for the dashboard](https://www.tencentcloud.com/document/product/614/95636?from_cn_redirect=1).
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
-{seconds} Value ranges from 0 to 59. 
-{Minutes} Value ranges from 0 to 59. 
-Hour. Value ranges from 0 to 23. 
-{Date} value ranges from 1 to 31 AND (last day of month: L) 
-{Month} value ranges from 1 to 12. 
-Week value ranges from 0 to 6 [0:Sunday, 6:Saturday]
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * Dashboard subscription data.
                     */
                    DashboardSubscribeData m_subscribeData;
                    bool m_subscribeDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDASHBOARDSUBSCRIBEREQUEST_H_
