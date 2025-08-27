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
                * 
                */
                class CheckItem : public AbstractModel
                {
                public:
                    CheckItem();
                    ~CheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return CheckName 
                     * 
                     */
                    std::string GetCheckName() const;

                    /**
                     * 设置
                     * @param _checkName 
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
                     * 获取
                     * @return CurrentValue 
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置
                     * @param _currentValue 
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
                     * 获取
                     * @return Passed 
                     * 
                     */
                    int64_t GetPassed() const;

                    /**
                     * 设置
                     * @param _passed 
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
                     * 获取
                     * @return IsAffect 
                     * 
                     */
                    int64_t GetIsAffect() const;

                    /**
                     * 设置
                     * @param _isAffect 
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
                     * 获取
                     * @return Msg 
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置
                     * @param _msg 
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
                     * 获取
                     * @return MsgCode 
                     * 
                     */
                    int64_t GetMsgCode() const;

                    /**
                     * 设置
                     * @param _msgCode 
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
                     * 
                     */
                    std::string m_checkName;
                    bool m_checkNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_isAffect;
                    bool m_isAffectHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_msgCode;
                    bool m_msgCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CHECKITEM_H_
