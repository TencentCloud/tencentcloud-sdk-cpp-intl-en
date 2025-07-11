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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OLDADDRINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OLDADDRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Database address
                */
                class OldAddrInfo : public AbstractModel
                {
                public:
                    OldAddrInfo();
                    ~OldAddrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
                     * @return Vip IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IP
                     * @param _vip IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Port
                     * @return Vport Port
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Port
                     * @param _vport Port
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Expect recycle time.
                     * @return ReturnTime Expect recycle time.
                     * 
                     */
                    std::string GetReturnTime() const;

                    /**
                     * 设置Expect recycle time.
                     * @param _returnTime Expect recycle time.
                     * 
                     */
                    void SetReturnTime(const std::string& _returnTime);

                    /**
                     * 判断参数 ReturnTime 是否已赋值
                     * @return ReturnTime 是否已赋值
                     * 
                     */
                    bool ReturnTimeHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Expect recycle time.
                     */
                    std::string m_returnTime;
                    bool m_returnTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OLDADDRINFO_H_
