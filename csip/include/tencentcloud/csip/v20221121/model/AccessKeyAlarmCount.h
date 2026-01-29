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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMCOUNT_H_

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
                * Alarm count for access key.
                */
                class AccessKeyAlarmCount : public AbstractModel
                {
                public:
                    AccessKeyAlarmCount();
                    ~AccessKeyAlarmCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access key ID.
                     * @return ID Access key ID.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Access key ID.
                     * @param _iD Access key ID.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Access key.
                     * @return AccessKey Access key.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access key.
                     * @param _accessKey Access key.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Alarm count.
                     * @return AlarmCount Alarm count.
                     * 
                     */
                    int64_t GetAlarmCount() const;

                    /**
                     * 设置Alarm count.
                     * @param _alarmCount Alarm count.
                     * 
                     */
                    void SetAlarmCount(const int64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取Security credentials status. valid values: 0 (disabled), 1 (enabled), 2 (deleted).
                     * @return AccessKeyStatus Security credentials status. valid values: 0 (disabled), 1 (enabled), 2 (deleted).
                     * 
                     */
                    int64_t GetAccessKeyStatus() const;

                    /**
                     * 设置Security credentials status. valid values: 0 (disabled), 1 (enabled), 2 (deleted).
                     * @param _accessKeyStatus Security credentials status. valid values: 0 (disabled), 1 (enabled), 2 (deleted).
                     * 
                     */
                    void SetAccessKeyStatus(const int64_t& _accessKeyStatus);

                    /**
                     * 判断参数 AccessKeyStatus 是否已赋值
                     * @return AccessKeyStatus 是否已赋值
                     * 
                     */
                    bool AccessKeyStatusHasBeenSet() const;

                    /**
                     * 获取AK creation time.
                     * @return AccessKeyCreateTime AK creation time.
                     * 
                     */
                    std::string GetAccessKeyCreateTime() const;

                    /**
                     * 设置AK creation time.
                     * @param _accessKeyCreateTime AK creation time.
                     * 
                     */
                    void SetAccessKeyCreateTime(const std::string& _accessKeyCreateTime);

                    /**
                     * 判断参数 AccessKeyCreateTime 是否已赋值
                     * @return AccessKeyCreateTime 是否已赋值
                     * 
                     */
                    bool AccessKeyCreateTimeHasBeenSet() const;

                    /**
                     * 获取AK last usage time. returns "-" if never used.
                     * @return LastAccessTime AK last usage time. returns "-" if never used.
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置AK last usage time. returns "-" if never used.
                     * @param _lastAccessTime AK last usage time. returns "-" if never used.
                     * 
                     */
                    void SetLastAccessTime(const std::string& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                private:

                    /**
                     * Access key ID.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Access key.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Alarm count.
                     */
                    int64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * Security credentials status. valid values: 0 (disabled), 1 (enabled), 2 (deleted).
                     */
                    int64_t m_accessKeyStatus;
                    bool m_accessKeyStatusHasBeenSet;

                    /**
                     * AK creation time.
                     */
                    std::string m_accessKeyCreateTime;
                    bool m_accessKeyCreateTimeHasBeenSet;

                    /**
                     * AK last usage time. returns "-" if never used.
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMCOUNT_H_
