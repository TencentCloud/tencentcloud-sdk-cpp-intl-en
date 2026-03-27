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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CHECKITEM_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Instance Resizing Inspection Items
                */
                class CheckItem : public AbstractModel
                {
                public:
                    CheckItem();
                    ~CheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check item names: CK_CPU - Post-Resizing CPU Risk Check; CK_MASTER_STORAGE - During read-only replica resizing, verify that read-only replica storage space is not less than that of the primary instance; CK_MEMORY - Post-Resizing Memory Risk Check; CK_STORAGE - Post-Resizing Storage Space Risk Check; CK_UPGRATE - Resizing Migration Requirement Check;
                     * @return CheckName Check item names: CK_CPU - Post-Resizing CPU Risk Check; CK_MASTER_STORAGE - During read-only replica resizing, verify that read-only replica storage space is not less than that of the primary instance; CK_MEMORY - Post-Resizing Memory Risk Check; CK_STORAGE - Post-Resizing Storage Space Risk Check; CK_UPGRATE - Resizing Migration Requirement Check;
                     * 
                     */
                    std::string GetCheckName() const;

                    /**
                     * 设置Check item names: CK_CPU - Post-Resizing CPU Risk Check; CK_MASTER_STORAGE - During read-only replica resizing, verify that read-only replica storage space is not less than that of the primary instance; CK_MEMORY - Post-Resizing Memory Risk Check; CK_STORAGE - Post-Resizing Storage Space Risk Check; CK_UPGRATE - Resizing Migration Requirement Check;
                     * @param _checkName Check item names: CK_CPU - Post-Resizing CPU Risk Check; CK_MASTER_STORAGE - During read-only replica resizing, verify that read-only replica storage space is not less than that of the primary instance; CK_MEMORY - Post-Resizing Memory Risk Check; CK_STORAGE - Post-Resizing Storage Space Risk Check; CK_UPGRATE - Resizing Migration Requirement Check;
                     * 
                     */
                    void SetCheckName(const std::string& _checkName);

                    /**
                     * 判断参数 CheckName 是否已赋值
                     * @return CheckName 是否已赋值
                     * 
                     */
                    bool CheckNameHasBeenSet() const;

                    /**
                     * 获取Check item return values: CK_CPU - Maximum CPU utilization (%) in the last 7 days; CK_MASTER_STORAGE - Disk space of the primary instance (GB); CK_MEMORY - Maximum memory usage (GB) in the last 7 days;

CK_STORAGE - Maximum disk usage (GB) in the last 7 days; CK_UPGRATE - Whether the current resizing check requires migration: MIGRATE indicates migration resizing is required, LOCAL indicates local resizing;
                     * @return CurrentValue Check item return values: CK_CPU - Maximum CPU utilization (%) in the last 7 days; CK_MASTER_STORAGE - Disk space of the primary instance (GB); CK_MEMORY - Maximum memory usage (GB) in the last 7 days;

CK_STORAGE - Maximum disk usage (GB) in the last 7 days; CK_UPGRATE - Whether the current resizing check requires migration: MIGRATE indicates migration resizing is required, LOCAL indicates local resizing;
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Check item return values: CK_CPU - Maximum CPU utilization (%) in the last 7 days; CK_MASTER_STORAGE - Disk space of the primary instance (GB); CK_MEMORY - Maximum memory usage (GB) in the last 7 days;

CK_STORAGE - Maximum disk usage (GB) in the last 7 days; CK_UPGRATE - Whether the current resizing check requires migration: MIGRATE indicates migration resizing is required, LOCAL indicates local resizing;
                     * @param _currentValue Check item return values: CK_CPU - Maximum CPU utilization (%) in the last 7 days; CK_MASTER_STORAGE - Disk space of the primary instance (GB); CK_MEMORY - Maximum memory usage (GB) in the last 7 days;

CK_STORAGE - Maximum disk usage (GB) in the last 7 days; CK_UPGRATE - Whether the current resizing check requires migration: MIGRATE indicates migration resizing is required, LOCAL indicates local resizing;
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取Check item pass status: 0 - Not passed, resizing not allowed; 1 - Passed, resizing allowed
                     * @return Passed Check item pass status: 0 - Not passed, resizing not allowed; 1 - Passed, resizing allowed
                     * 
                     */
                    int64_t GetPassed() const;

                    /**
                     * 设置Check item pass status: 0 - Not passed, resizing not allowed; 1 - Passed, resizing allowed
                     * @param _passed Check item pass status: 0 - Not passed, resizing not allowed; 1 - Passed, resizing allowed
                     * 
                     */
                    void SetPassed(const int64_t& _passed);

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取Whether this resizing item affects the instance: 0 - No impact; 1 - Impact exists
                     * @return IsAffect Whether this resizing item affects the instance: 0 - No impact; 1 - Impact exists
                     * 
                     */
                    int64_t GetIsAffect() const;

                    /**
                     * 设置Whether this resizing item affects the instance: 0 - No impact; 1 - Impact exists
                     * @param _isAffect Whether this resizing item affects the instance: 0 - No impact; 1 - Impact exists
                     * 
                     */
                    void SetIsAffect(const int64_t& _isAffect);

                    /**
                     * 判断参数 IsAffect 是否已赋值
                     * @return IsAffect 是否已赋值
                     * 
                     */
                    bool IsAffectHasBeenSet() const;

                    /**
                     * 获取Required description when impact exists or the check is not passed
                     * @return Msg Required description when impact exists or the check is not passed
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置Required description when impact exists or the check is not passed
                     * @param _msg Required description when impact exists or the check is not passed
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取Describe the corresponding code
                     * @return MsgCode Describe the corresponding code
                     * 
                     */
                    int64_t GetMsgCode() const;

                    /**
                     * 设置Describe the corresponding code
                     * @param _msgCode Describe the corresponding code
                     * 
                     */
                    void SetMsgCode(const int64_t& _msgCode);

                    /**
                     * 判断参数 MsgCode 是否已赋值
                     * @return MsgCode 是否已赋值
                     * 
                     */
                    bool MsgCodeHasBeenSet() const;

                private:

                    /**
                     * Check item names: CK_CPU - Post-Resizing CPU Risk Check; CK_MASTER_STORAGE - During read-only replica resizing, verify that read-only replica storage space is not less than that of the primary instance; CK_MEMORY - Post-Resizing Memory Risk Check; CK_STORAGE - Post-Resizing Storage Space Risk Check; CK_UPGRATE - Resizing Migration Requirement Check;
                     */
                    std::string m_checkName;
                    bool m_checkNameHasBeenSet;

                    /**
                     * Check item return values: CK_CPU - Maximum CPU utilization (%) in the last 7 days; CK_MASTER_STORAGE - Disk space of the primary instance (GB); CK_MEMORY - Maximum memory usage (GB) in the last 7 days;

CK_STORAGE - Maximum disk usage (GB) in the last 7 days; CK_UPGRATE - Whether the current resizing check requires migration: MIGRATE indicates migration resizing is required, LOCAL indicates local resizing;
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Check item pass status: 0 - Not passed, resizing not allowed; 1 - Passed, resizing allowed
                     */
                    int64_t m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * Whether this resizing item affects the instance: 0 - No impact; 1 - Impact exists
                     */
                    int64_t m_isAffect;
                    bool m_isAffectHasBeenSet;

                    /**
                     * Required description when impact exists or the check is not passed
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Describe the corresponding code
                     */
                    int64_t m_msgCode;
                    bool m_msgCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CHECKITEM_H_
