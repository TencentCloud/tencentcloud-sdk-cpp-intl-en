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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Describes the information item for creating a staff.
                */
                class SetStaffStatusItem : public AbstractModel
                {
                public:
                    SetStaffStatusItem();
                    ~SetStaffStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent account.
                     * @return StaffUserId Agent account.
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 设置Agent account.
                     * @param _staffUserId Agent account.
                     * 
                     */
                    void SetStaffUserId(const std::string& _staffUserId);

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取Status. specifies the instance status. valid values: free (idle), notReady (busy), rest (short break).	
                     * @return Status Status. specifies the instance status. valid values: free (idle), notReady (busy), rest (short break).	
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. specifies the instance status. valid values: free (idle), notReady (busy), rest (short break).	
                     * @param _status Status. specifies the instance status. valid values: free (idle), notReady (busy), rest (short break).	
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
                     * 获取Specifies the reason if the break state is set.
                     * @return Reason Specifies the reason if the break state is set.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Specifies the reason if the break state is set.
                     * @param _reason Specifies the reason if the break state is set.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Agent account.
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * Status. specifies the instance status. valid values: free (idle), notReady (busy), rest (short break).	
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies the reason if the break state is set.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSITEM_H_
