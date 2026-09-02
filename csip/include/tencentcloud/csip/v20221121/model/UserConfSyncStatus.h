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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERCONFSYNCSTATUS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERCONFSYNCSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * User configuration synchronization status
                */
                class UserConfSyncStatus : public AbstractModel
                {
                public:
                    UserConfSyncStatus();
                    ~UserConfSyncStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>User AppID.</p>
                     * @return AppID <p>User AppID.</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>User AppID.</p>
                     * @param _appID <p>User AppID.</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Whether administrator synchronization is allowed</p>
                     * @return AllowSync <p>Whether administrator synchronization is allowed</p>
                     * 
                     */
                    bool GetAllowSync() const;

                    /**
                     * 设置<p>Whether administrator synchronization is allowed</p>
                     * @param _allowSync <p>Whether administrator synchronization is allowed</p>
                     * 
                     */
                    void SetAllowSync(const bool& _allowSync);

                    /**
                     * 判断参数 AllowSync 是否已赋值
                     * @return AllowSync 是否已赋值
                     * 
                     */
                    bool AllowSyncHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is being configured</p>
                     * @return InConf <p>Whether it is being configured</p>
                     * 
                     */
                    bool GetInConf() const;

                    /**
                     * 设置<p>Whether it is being configured</p>
                     * @param _inConf <p>Whether it is being configured</p>
                     * 
                     */
                    void SetInConf(const bool& _inConf);

                    /**
                     * 判断参数 InConf 是否已赋值
                     * @return InConf 是否已赋值
                     * 
                     */
                    bool InConfHasBeenSet() const;

                    /**
                     * 获取<p>Whether synchronized by other administrators</p>
                     * @return ManagedByOther <p>Whether synchronized by other administrators</p>
                     * 
                     */
                    bool GetManagedByOther() const;

                    /**
                     * 设置<p>Whether synchronized by other administrators</p>
                     * @param _managedByOther <p>Whether synchronized by other administrators</p>
                     * 
                     */
                    void SetManagedByOther(const bool& _managedByOther);

                    /**
                     * 判断参数 ManagedByOther 是否已赋值
                     * @return ManagedByOther 是否已赋值
                     * 
                     */
                    bool ManagedByOtherHasBeenSet() const;

                private:

                    /**
                     * <p>User AppID.</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Whether administrator synchronization is allowed</p>
                     */
                    bool m_allowSync;
                    bool m_allowSyncHasBeenSet;

                    /**
                     * <p>Whether it is being configured</p>
                     */
                    bool m_inConf;
                    bool m_inConfHasBeenSet;

                    /**
                     * <p>Whether synchronized by other administrators</p>
                     */
                    bool m_managedByOther;
                    bool m_managedByOtherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERCONFSYNCSTATUS_H_
