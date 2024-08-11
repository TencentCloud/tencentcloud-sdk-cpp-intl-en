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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESENSITIVEAPIAPPLYDETAIL_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESENSITIVEAPIAPPLYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Details of sensitive API applications
                */
                class DescribeSensitiveApiApplyDetail : public AbstractModel
                {
                public:
                    DescribeSensitiveApiApplyDetail();
                    ~DescribeSensitiveApiApplyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIId API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIId API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIId(const std::string& _aPIId);

                    /**
                     * 判断参数 APIId 是否已赋值
                     * @return APIId 是否已赋值
                     * 
                     */
                    bool APIIdHasBeenSet() const;

                    /**
                     * 获取API request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIMethod API request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAPIMethod() const;

                    /**
                     * 设置API request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIMethod API request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIMethod(const std::string& _aPIMethod);

                    /**
                     * 判断参数 APIMethod 是否已赋值
                     * @return APIMethod 是否已赋值
                     * 
                     */
                    bool APIMethodHasBeenSet() const;

                    /**
                     * 获取Reason for application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplyReason Reason for application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplyReason() const;

                    /**
                     * 设置Reason for application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applyReason Reason for application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplyReason(const std::string& _applyReason);

                    /**
                     * 判断参数 ApplyReason 是否已赋值
                     * @return ApplyReason 是否已赋值
                     * 
                     */
                    bool ApplyReasonHasBeenSet() const;

                    /**
                     * 获取Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RejectReason Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRejectReason() const;

                    /**
                     * 设置Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rejectReason Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRejectReason(const std::string& _rejectReason);

                    /**
                     * 判断参数 RejectReason 是否已赋值
                     * @return RejectReason 是否已赋值
                     * 
                     */
                    bool RejectReasonHasBeenSet() const;

                    /**
                     * 获取Approval status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditStatus Approval status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置Approval status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditStatus Approval status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIDesc API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAPIDesc() const;

                    /**
                     * 设置API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIDesc API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIDesc(const std::string& _aPIDesc);

                    /**
                     * 判断参数 APIDesc 是否已赋值
                     * @return APIDesc 是否已赋值
                     * 
                     */
                    bool APIDescHasBeenSet() const;

                    /**
                     * 获取API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIType API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAPIType() const;

                    /**
                     * 设置API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIType API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIType(const int64_t& _aPIType);

                    /**
                     * 判断参数 APIType 是否已赋值
                     * @return APIType 是否已赋值
                     * 
                     */
                    bool APITypeHasBeenSet() const;

                private:

                    /**
                     * API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * API request method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aPIMethod;
                    bool m_aPIMethodHasBeenSet;

                    /**
                     * Reason for application
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applyReason;
                    bool m_applyReasonHasBeenSet;

                    /**
                     * Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                    /**
                     * Approval status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aPIDesc;
                    bool m_aPIDescHasBeenSet;

                    /**
                     * API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_aPIType;
                    bool m_aPITypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESENSITIVEAPIAPPLYDETAIL_H_
