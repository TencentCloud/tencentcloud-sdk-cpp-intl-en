/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                * Differences between the newest and existing intermediate IPs
                */
                class DiffIPWhitelist : public AbstractModel
                {
                public:
                    DiffIPWhitelist();
                    ~DiffIPWhitelist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The latest intermediate IPs.
                     * @return LatestIPWhitelist The latest intermediate IPs.
                     * 
                     */
                    IPWhitelist GetLatestIPWhitelist() const;

                    /**
                     * 设置The latest intermediate IPs.
                     * @param _latestIPWhitelist The latest intermediate IPs.
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
                     * 获取The intermediate IPs added to the existing list.
                     * @return AddedIPWhitelist The intermediate IPs added to the existing list.
                     * 
                     */
                    IPWhitelist GetAddedIPWhitelist() const;

                    /**
                     * 设置The intermediate IPs added to the existing list.
                     * @param _addedIPWhitelist The intermediate IPs added to the existing list.
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
                     * 获取The intermediate IPs removed from the existing list.
                     * @return RemovedIPWhitelist The intermediate IPs removed from the existing list.
                     * 
                     */
                    IPWhitelist GetRemovedIPWhitelist() const;

                    /**
                     * 设置The intermediate IPs removed from the existing list.
                     * @param _removedIPWhitelist The intermediate IPs removed from the existing list.
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
                     * 获取The intermediate IPs that remain unchanged.
                     * @return NoChangeIPWhitelist The intermediate IPs that remain unchanged.
                     * 
                     */
                    IPWhitelist GetNoChangeIPWhitelist() const;

                    /**
                     * 设置The intermediate IPs that remain unchanged.
                     * @param _noChangeIPWhitelist The intermediate IPs that remain unchanged.
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
                     * The latest intermediate IPs.
                     */
                    IPWhitelist m_latestIPWhitelist;
                    bool m_latestIPWhitelistHasBeenSet;

                    /**
                     * The intermediate IPs added to the existing list.
                     */
                    IPWhitelist m_addedIPWhitelist;
                    bool m_addedIPWhitelistHasBeenSet;

                    /**
                     * The intermediate IPs removed from the existing list.
                     */
                    IPWhitelist m_removedIPWhitelist;
                    bool m_removedIPWhitelistHasBeenSet;

                    /**
                     * The intermediate IPs that remain unchanged.
                     */
                    IPWhitelist m_noChangeIPWhitelist;
                    bool m_noChangeIPWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DIFFIPWHITELIST_H_
