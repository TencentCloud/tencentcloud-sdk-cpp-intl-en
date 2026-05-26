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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPAPPROVALRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPAPPROVALRESP_H_

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
                * Response for submitting a mini program version for approval.
                */
                class CreateMNPApprovalResp : public AbstractModel
                {
                public:
                    CreateMNPApprovalResp();
                    ~CreateMNPApprovalResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The Boolean response object.
                     * @return Result The Boolean response object.
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置The Boolean response object.
                     * @param _result The Boolean response object.
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Approval nunmber.
                     * @return ApprovalNo Approval nunmber.
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置Approval nunmber.
                     * @param _approvalNo Approval nunmber.
                     * 
                     */
                    void SetApprovalNo(const std::string& _approvalNo);

                    /**
                     * 判断参数 ApprovalNo 是否已赋值
                     * @return ApprovalNo 是否已赋值
                     * 
                     */
                    bool ApprovalNoHasBeenSet() const;

                private:

                    /**
                     * The Boolean response object.
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Approval nunmber.
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPAPPROVALRESP_H_
