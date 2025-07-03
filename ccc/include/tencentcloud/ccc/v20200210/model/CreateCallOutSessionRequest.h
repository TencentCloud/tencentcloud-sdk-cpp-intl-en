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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATECALLOUTSESSIONREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATECALLOUTSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCallOutSession request structure.
                */
                class CreateCallOutSessionRequest : public AbstractModel
                {
                public:
                    CreateCallOutSessionRequest();
                    ~CreateCallOutSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id.
                     * @return SdkAppId Application id.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application id.
                     * @param _sdkAppId Application id.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Customer service user ID, generally the customer service email. ensure that the mobile number has been bound. https://intl.cloud.tencent.com/document/product/679/76067?from_cn_redirect=1#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF.
                     * @return UserId Customer service user ID, generally the customer service email. ensure that the mobile number has been bound. https://intl.cloud.tencent.com/document/product/679/76067?from_cn_redirect=1#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Customer service user ID, generally the customer service email. ensure that the mobile number has been bound. https://intl.cloud.tencent.com/document/product/679/76067?from_cn_redirect=1#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF.
                     * @param _userId Customer service user ID, generally the customer service email. ensure that the mobile number has been bound. https://intl.cloud.tencent.com/document/product/679/76067?from_cn_redirect=1#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Called number must be preceded by 0086.
                     * @return Callee Called number must be preceded by 0086.
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置Called number must be preceded by 0086.
                     * @param _callee Called number must be preceded by 0086.
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取Caller number (obsolete one and use callers) must be preceded by 0086.
                     * @return Caller Caller number (obsolete one and use callers) must be preceded by 0086.
                     * 
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置Caller number (obsolete one and use callers) must be preceded by 0086.
                     * @param _caller Caller number (obsolete one and use callers) must be preceded by 0086.
                     * 
                     */
                    void SetCaller(const std::string& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取Designated caller number list. if the prior number fails, it will automatically switch to the next number that must be preceded by 0086.
                     * @return Callers Designated caller number list. if the prior number fails, it will automatically switch to the next number that must be preceded by 0086.
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置Designated caller number list. if the prior number fails, it will automatically switch to the next number that must be preceded by 0086.
                     * @param _callers Designated caller number list. if the prior number fails, it will automatically switch to the next number that must be preceded by 0086.
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取Whether to force the use of mobile outbound call. currently only supports true. if set to true, ensure the allowlist is configured. https://intl.cloud.tencent.com/document/product/679/76744?from_cn_redirect=1#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4.
                     * @return IsForceUseMobile Whether to force the use of mobile outbound call. currently only supports true. if set to true, ensure the allowlist is configured. https://intl.cloud.tencent.com/document/product/679/76744?from_cn_redirect=1#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4.
                     * 
                     */
                    bool GetIsForceUseMobile() const;

                    /**
                     * 设置Whether to force the use of mobile outbound call. currently only supports true. if set to true, ensure the allowlist is configured. https://intl.cloud.tencent.com/document/product/679/76744?from_cn_redirect=1#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4.
                     * @param _isForceUseMobile Whether to force the use of mobile outbound call. currently only supports true. if set to true, ensure the allowlist is configured. https://intl.cloud.tencent.com/document/product/679/76744?from_cn_redirect=1#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4.
                     * 
                     */
                    void SetIsForceUseMobile(const bool& _isForceUseMobile);

                    /**
                     * 判断参数 IsForceUseMobile 是否已赋值
                     * @return IsForceUseMobile 是否已赋值
                     * 
                     */
                    bool IsForceUseMobileHasBeenSet() const;

                    /**
                     * 获取Custom data, length limited to 1024 bytes.
                     * @return Uui Custom data, length limited to 1024 bytes.
                     * @deprecated
                     */
                    std::string GetUui() const;

                    /**
                     * 设置Custom data, length limited to 1024 bytes.
                     * @param _uui Custom data, length limited to 1024 bytes.
                     * @deprecated
                     */
                    void SetUui(const std::string& _uui);

                    /**
                     * 判断参数 Uui 是否已赋值
                     * @return Uui 是否已赋值
                     * @deprecated
                     */
                    bool UuiHasBeenSet() const;

                    /**
                     * 获取Custom data, length limited to 1024 bytes.
                     * @return UUI Custom data, length limited to 1024 bytes.
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置Custom data, length limited to 1024 bytes.
                     * @param _uUI Custom data, length limited to 1024 bytes.
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                private:

                    /**
                     * Application id.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Customer service user ID, generally the customer service email. ensure that the mobile number has been bound. https://intl.cloud.tencent.com/document/product/679/76067?from_cn_redirect=1#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Called number must be preceded by 0086.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * Caller number (obsolete one and use callers) must be preceded by 0086.
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * Designated caller number list. if the prior number fails, it will automatically switch to the next number that must be preceded by 0086.
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * Whether to force the use of mobile outbound call. currently only supports true. if set to true, ensure the allowlist is configured. https://intl.cloud.tencent.com/document/product/679/76744?from_cn_redirect=1#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4.
                     */
                    bool m_isForceUseMobile;
                    bool m_isForceUseMobileHasBeenSet;

                    /**
                     * Custom data, length limited to 1024 bytes.
                     */
                    std::string m_uui;
                    bool m_uuiHasBeenSet;

                    /**
                     * Custom data, length limited to 1024 bytes.
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATECALLOUTSESSIONREQUEST_H_
