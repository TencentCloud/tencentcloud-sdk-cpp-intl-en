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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHDASHBOARDSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHDASHBOARDSUBSCRIBEREQUEST_H_

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
                * SearchDashboardSubscribe request structure.
                */
                class SearchDashboardSubscribeRequest : public AbstractModel
                {
                public:
                    SearchDashboardSubscribeRequest();
                    ~SearchDashboardSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) API.
                     * @return DashboardId Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) API.
                     * @param _dashboardId Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) API.
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

                    /**
                     * 获取Dashboard subscription Id. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     * @return Id Dashboard subscription Id. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Dashboard subscription Id. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     * @param _id Dashboard subscription Id. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
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
                     * 获取Dashboard subscription Name. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     * @return Name Dashboard subscription Name. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Dashboard subscription Name. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     * @param _name Dashboard subscription Name. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Dashboard id. Obtain the DashboardId through the [Get Dashboard](https://www.tencentcloud.com/document/api/614/95636?from_cn_redirect=1) API.
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * Dashboard subscription data.
                     */
                    DashboardSubscribeData m_subscribeData;
                    bool m_subscribeDataHasBeenSet;

                    /**
                     * Dashboard subscription Id. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Dashboard subscription Name. Obtain through the api [Dashboard subscription list](https://www.tencentcloud.com/document/api/614/105779?from_cn_redirect=1).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHDASHBOARDSUBSCRIBEREQUEST_H_
