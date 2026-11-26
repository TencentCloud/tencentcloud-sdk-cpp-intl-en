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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DIFFIPWHITELIST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DIFFIPWHITELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPWhitelist.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Difference between the latest IP whitelist list and the current IP whitelist list
                */
                class DiffIPWhitelist : public AbstractModel
                {
                public:
                    DiffIPWhitelist();
                    ~DiffIPWhitelist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Latest IP whitelist list.
                     * @return LatestIPWhitelist Latest IP whitelist list.
                     * 
                     */
                    IPWhitelist GetLatestIPWhitelist() const;

                    /**
                     * 设置Latest IP whitelist list.
                     * @param _latestIPWhitelist Latest IP whitelist list.
                     * 
                     */
                    void SetLatestIPWhitelist(const IPWhitelist& _latestIPWhitelist);

                    /**
                     * 判断参数 LatestIPWhitelist 是否已赋值
                     * @return LatestIPWhitelist 是否已赋值
                     * 
                     */
                    bool LatestIPWhitelistHasBeenSet() const;

                    /**
                     * 获取Newly added part of the latest IP whitelist list compared with the current IP whitelist list.
                     * @return AddedIPWhitelist Newly added part of the latest IP whitelist list compared with the current IP whitelist list.
                     * 
                     */
                    IPWhitelist GetAddedIPWhitelist() const;

                    /**
                     * 设置Newly added part of the latest IP whitelist list compared with the current IP whitelist list.
                     * @param _addedIPWhitelist Newly added part of the latest IP whitelist list compared with the current IP whitelist list.
                     * 
                     */
                    void SetAddedIPWhitelist(const IPWhitelist& _addedIPWhitelist);

                    /**
                     * 判断参数 AddedIPWhitelist 是否已赋值
                     * @return AddedIPWhitelist 是否已赋值
                     * 
                     */
                    bool AddedIPWhitelistHasBeenSet() const;

                    /**
                     * 获取The latest IP whitelist list has partially deleted entries compared with the current IP whitelist list.
                     * @return RemovedIPWhitelist The latest IP whitelist list has partially deleted entries compared with the current IP whitelist list.
                     * 
                     */
                    IPWhitelist GetRemovedIPWhitelist() const;

                    /**
                     * 设置The latest IP whitelist list has partially deleted entries compared with the current IP whitelist list.
                     * @param _removedIPWhitelist The latest IP whitelist list has partially deleted entries compared with the current IP whitelist list.
                     * 
                     */
                    void SetRemovedIPWhitelist(const IPWhitelist& _removedIPWhitelist);

                    /**
                     * 判断参数 RemovedIPWhitelist 是否已赋值
                     * @return RemovedIPWhitelist 是否已赋值
                     * 
                     */
                    bool RemovedIPWhitelistHasBeenSet() const;

                    /**
                     * 获取Unchanged part of the latest IP allowlist compared with the current IP allowlist.
                     * @return NoChangeIPWhitelist Unchanged part of the latest IP allowlist compared with the current IP allowlist.
                     * 
                     */
                    IPWhitelist GetNoChangeIPWhitelist() const;

                    /**
                     * 设置Unchanged part of the latest IP allowlist compared with the current IP allowlist.
                     * @param _noChangeIPWhitelist Unchanged part of the latest IP allowlist compared with the current IP allowlist.
                     * 
                     */
                    void SetNoChangeIPWhitelist(const IPWhitelist& _noChangeIPWhitelist);

                    /**
                     * 判断参数 NoChangeIPWhitelist 是否已赋值
                     * @return NoChangeIPWhitelist 是否已赋值
                     * 
                     */
                    bool NoChangeIPWhitelistHasBeenSet() const;

                private:

                    /**
                     * Latest IP whitelist list.
                     */
                    IPWhitelist m_latestIPWhitelist;
                    bool m_latestIPWhitelistHasBeenSet;

                    /**
                     * Newly added part of the latest IP whitelist list compared with the current IP whitelist list.
                     */
                    IPWhitelist m_addedIPWhitelist;
                    bool m_addedIPWhitelistHasBeenSet;

                    /**
                     * The latest IP whitelist list has partially deleted entries compared with the current IP whitelist list.
                     */
                    IPWhitelist m_removedIPWhitelist;
                    bool m_removedIPWhitelistHasBeenSet;

                    /**
                     * Unchanged part of the latest IP allowlist compared with the current IP allowlist.
                     */
                    IPWhitelist m_noChangeIPWhitelist;
                    bool m_noChangeIPWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DIFFIPWHITELIST_H_
