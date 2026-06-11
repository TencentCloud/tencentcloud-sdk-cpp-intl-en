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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Dashboard subscription information
                */
                class DashboardSubscribeInfo : public AbstractModel
                {
                public:
                    DashboardSubscribeInfo();
                    ~DashboardSubscribeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dashboard subscription ID
                     * @return Id Dashboard subscription ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Dashboard subscription ID
                     * @param _id Dashboard subscription ID
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
                     * 获取Dashboard subscription name.
                     * @return Name Dashboard subscription name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Dashboard subscription name.
                     * @param _name Dashboard subscription name.
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
                     * 获取Dashboard ID.
                     * @return DashboardId Dashboard ID.
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置Dashboard ID.
                     * @param _dashboardId Dashboard ID.
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
                     * 获取Dashboard subscription time.
                     * @return Cron Dashboard subscription time.
                     * 
                     */
                    std::string GetCron() const;

                    /**
                     * 设置Dashboard subscription time.
                     * @param _cron Dashboard subscription time.
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

                    /**
                     * 获取Creation time of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     * @return CreateTime Creation time of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     * @param _createTime Creation time of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Dashboard subscription record update time. Format: `YYYY-MM-DD HH:MM:SS`
                     * @return UpdateTime Dashboard subscription record update time. Format: `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Dashboard subscription record update time. Format: `YYYY-MM-DD HH:MM:SS`
                     * @param _updateTime Dashboard subscription record update time. Format: `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Time sent successfully of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     * @return LastTime Time sent successfully of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Time sent successfully of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     * @param _lastTime Time sent successfully of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Cloud primary account ID.
                     * @return Uin Cloud primary account ID.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Cloud primary account ID.
                     * @param _uin Cloud primary account ID.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-account ID under coud main account.
                     * @return SubUin Sub-account ID under coud main account.
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置Sub-account ID under coud main account.
                     * @param _subUin Sub-account ID under coud main account.
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Last sending status of the dashboard subscription records. success: all sent successfully; fail: not sent; partialSuccess: partially sent successfully.
                     * @return LastStatus Last sending status of the dashboard subscription records. success: all sent successfully; fail: not sent; partialSuccess: partially sent successfully.
                     * 
                     */
                    std::string GetLastStatus() const;

                    /**
                     * 设置Last sending status of the dashboard subscription records. success: all sent successfully; fail: not sent; partialSuccess: partially sent successfully.
                     * @param _lastStatus Last sending status of the dashboard subscription records. success: all sent successfully; fail: not sent; partialSuccess: partially sent successfully.
                     * 
                     */
                    void SetLastStatus(const std::string& _lastStatus);

                    /**
                     * 判断参数 LastStatus 是否已赋值
                     * @return LastStatus 是否已赋值
                     * 
                     */
                    bool LastStatusHasBeenSet() const;

                private:

                    /**
                     * Dashboard subscription ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Dashboard subscription name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Dashboard ID.
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * Dashboard subscription time.
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * Dashboard subscription data.
                     */
                    DashboardSubscribeData m_subscribeData;
                    bool m_subscribeDataHasBeenSet;

                    /**
                     * Creation time of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Dashboard subscription record update time. Format: `YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Time sent successfully of dashboard subscription record. Format: `YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Cloud primary account ID.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-account ID under coud main account.
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Last sending status of the dashboard subscription records. success: all sent successfully; fail: not sent; partialSuccess: partially sent successfully.
                     */
                    std::string m_lastStatus;
                    bool m_lastStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEINFO_H_
