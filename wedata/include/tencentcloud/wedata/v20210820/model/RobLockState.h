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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBLOCKSTATE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBLOCKSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Lock Acquisition Status: Whether to Grab the Lock and Current Lock Holder
                */
                class RobLockState : public AbstractModel
                {
                public:
                    RobLockState();
                    ~RobLockState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to Grab the Lock
                     * @return IsRob Whether to Grab the Lock
                     * 
                     */
                    bool GetIsRob() const;

                    /**
                     * 设置Whether to Grab the Lock
                     * @param _isRob Whether to Grab the Lock
                     * 
                     */
                    void SetIsRob(const bool& _isRob);

                    /**
                     * 判断参数 IsRob 是否已赋值
                     * @return IsRob 是否已赋值
                     * 
                     */
                    bool IsRobHasBeenSet() const;

                    /**
                     * 获取Current Lock Holder
                     * @return Locker Current Lock Holder
                     * 
                     */
                    std::string GetLocker() const;

                    /**
                     * 设置Current Lock Holder
                     * @param _locker Current Lock Holder
                     * 
                     */
                    void SetLocker(const std::string& _locker);

                    /**
                     * 判断参数 Locker 是否已赋值
                     * @return Locker 是否已赋值
                     * 
                     */
                    bool LockerHasBeenSet() const;

                private:

                    /**
                     * Whether to Grab the Lock
                     */
                    bool m_isRob;
                    bool m_isRobHasBeenSet;

                    /**
                     * Current Lock Holder
                     */
                    std::string m_locker;
                    bool m_lockerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBLOCKSTATE_H_
