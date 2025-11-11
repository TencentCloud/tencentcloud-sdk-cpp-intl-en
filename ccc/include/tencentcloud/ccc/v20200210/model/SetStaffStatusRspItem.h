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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRSPITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRSPITEM_H_

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
                * Specifies the staff status response item.
                */
                class SetStaffStatusRspItem : public AbstractModel
                {
                public:
                    SetStaffStatusRspItem();
                    ~SetStaffStatusRspItem() = default;
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
                     * 获取Error code. see the overall error code in the protocol.
                     * @return ErrorCode Error code. see the overall error code in the protocol.
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置Error code. see the overall error code in the protocol.
                     * @param _errorCode Error code. see the overall error code in the protocol.
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return ErrorMessage Error message.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Error message.
                     * @param _errorMessage Error message.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Current status.
                     * @return Status Current status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current status.
                     * @param _status Current status.
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
                     * 获取Status if it is on break. specifies the reason.
                     * @return Reason Status if it is on break. specifies the reason.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Status if it is on break. specifies the reason.
                     * @param _reason Status if it is on break. specifies the reason.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Previous status.
                     * @return PreviousStatus Previous status.
                     * 
                     */
                    std::string GetPreviousStatus() const;

                    /**
                     * 设置Previous status.
                     * @param _previousStatus Previous status.
                     * 
                     */
                    void SetPreviousStatus(const std::string& _previousStatus);

                    /**
                     * 判断参数 PreviousStatus 是否已赋值
                     * @return PreviousStatus 是否已赋值
                     * 
                     */
                    bool PreviousStatusHasBeenSet() const;

                    /**
                     * 获取If the earlier status is on break, this is the reason.
                     * @return PreviousReason If the earlier status is on break, this is the reason.
                     * 
                     */
                    std::string GetPreviousReason() const;

                    /**
                     * 设置If the earlier status is on break, this is the reason.
                     * @param _previousReason If the earlier status is on break, this is the reason.
                     * 
                     */
                    void SetPreviousReason(const std::string& _previousReason);

                    /**
                     * 判断参数 PreviousReason 是否已赋值
                     * @return PreviousReason 是否已赋值
                     * 
                     */
                    bool PreviousReasonHasBeenSet() const;

                private:

                    /**
                     * Agent account.
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * Error code. see the overall error code in the protocol.
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Current status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status if it is on break. specifies the reason.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Previous status.
                     */
                    std::string m_previousStatus;
                    bool m_previousStatusHasBeenSet;

                    /**
                     * If the earlier status is on break, this is the reason.
                     */
                    std::string m_previousReason;
                    bool m_previousReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRSPITEM_H_
