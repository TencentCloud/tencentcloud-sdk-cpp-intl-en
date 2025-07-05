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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICASTATUS_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICASTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DCN status information
                */
                class DCNReplicaStatus : public AbstractModel
                {
                public:
                    DCNReplicaStatus();
                    ~DCNReplicaStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DCN running status. Valid values: `START` (running), `STOP` (pause).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status DCN running status. Valid values: `START` (running), `STOP` (pause).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置DCN running status. Valid values: `START` (running), `STOP` (pause).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status DCN running status. Valid values: `START` (running), `STOP` (pause).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The current delay, which takes the delay value of the replica instance.
                     * @return Delay The current delay, which takes the delay value of the replica instance.
                     * 
                     */
                    int64_t GetDelay() const;

                    /**
                     * 设置The current delay, which takes the delay value of the replica instance.
                     * @param _delay The current delay, which takes the delay value of the replica instance.
                     * 
                     */
                    void SetDelay(const int64_t& _delay);

                    /**
                     * 判断参数 Delay 是否已赋值
                     * @return Delay 是否已赋值
                     * 
                     */
                    bool DelayHasBeenSet() const;

                private:

                    /**
                     * DCN running status. Valid values: `START` (running), `STOP` (pause).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The current delay, which takes the delay value of the replica instance.
                     */
                    int64_t m_delay;
                    bool m_delayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICASTATUS_H_
