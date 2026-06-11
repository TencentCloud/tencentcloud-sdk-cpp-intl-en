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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDASHBOARDSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDASHBOARDSUBSCRIBEREQUEST_H_

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
                * ModifyDashboardSubscribe request structure.
                */
                class ModifyDashboardSubscribeRequest : public AbstractModel
                {
                public:
                    ModifyDashboardSubscribeRequest();
                    ~ModifyDashboardSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dashboard subscription id. Obtain the id through the [Get Dashboard Subscription List](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1) api.
                     * @return Id Dashboard subscription id. Obtain the id through the [Get Dashboard Subscription List](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1) api.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Dashboard subscription id. Obtain the id through the [Get Dashboard Subscription List](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1) api.
                     * @param _id Dashboard subscription id. Obtain the id through the [Get Dashboard Subscription List](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1) api.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) api.
                     * @return DashboardId Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) api.
                     * @param _dashboardId Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) api.
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
                     * 获取Dashboard subscription name. Supports a maximum of 128 characters and does not support the '|' character.
                     * @return Name Dashboard subscription name. Supports a maximum of 128 characters and does not support the '|' character.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Dashboard subscription name. Supports a maximum of 128 characters and does not support the '|' character.
                     * @param _name Dashboard subscription name. Supports a maximum of 128 characters and does not support the '|' character.
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
                     * 获取Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
                     * @return Cron Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
                     * 
                     */
                    std::string GetCron() const;

                    /**
                     * 设置Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
                     * @param _cron Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
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
                     * Dashboard subscription id. Obtain the id through the [Get Dashboard Subscription List](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1) api.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) api.
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * Dashboard subscription name. Supports a maximum of 128 characters and does not support the '|' character.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subscription time cron expression, in format {seconds} {minutes} {hours} {date} {month} {weekday}; (valid data: {minutes} {hours} {date} {month} {weekday})
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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDASHBOARDSUBSCRIBEREQUEST_H_
