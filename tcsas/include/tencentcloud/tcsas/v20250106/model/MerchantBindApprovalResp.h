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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MERCHANTBINDAPPROVALRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MERCHANTBINDAPPROVALRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response parameters structure for requesting payment merchant binding.
                */
                class MerchantBindApprovalResp : public AbstractModel
                {
                public:
                    MerchantBindApprovalResp();
                    ~MerchantBindApprovalResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Operation response result. A value of true indicates that the operation succeeded.</p>
                     * @return ApprovalResult <p>Operation response result. A value of true indicates that the operation succeeded.</p>
                     * 
                     */
                    bool GetApprovalResult() const;

                    /**
                     * 设置<p>Operation response result. A value of true indicates that the operation succeeded.</p>
                     * @param _approvalResult <p>Operation response result. A value of true indicates that the operation succeeded.</p>
                     * 
                     */
                    void SetApprovalResult(const bool& _approvalResult);

                    /**
                     * 判断参数 ApprovalResult 是否已赋值
                     * @return ApprovalResult 是否已赋值
                     * 
                     */
                    bool ApprovalResultHasBeenSet() const;

                    /**
                     * 获取<p>Approval number. Required as an input parameter when calling the API to approve merchant binding.</p>
                     * @return ResourceId <p>Approval number. Required as an input parameter when calling the API to approve merchant binding.</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Approval number. Required as an input parameter when calling the API to approve merchant binding.</p>
                     * @param _resourceId <p>Approval number. Required as an input parameter when calling the API to approve merchant binding.</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Operation response result. A value of true indicates that the operation succeeded.</p>
                     */
                    bool m_approvalResult;
                    bool m_approvalResultHasBeenSet;

                    /**
                     * <p>Approval number. Required as an input parameter when calling the API to approve merchant binding.</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MERCHANTBINDAPPROVALRESP_H_
