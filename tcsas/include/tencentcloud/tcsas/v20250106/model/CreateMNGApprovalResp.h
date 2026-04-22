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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGAPPROVALRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGAPPROVALRESP_H_

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
                * Response for submitting a mini game version for approval
                */
                class CreateMNGApprovalResp : public AbstractModel
                {
                public:
                    CreateMNGApprovalResp();
                    ~CreateMNGApprovalResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Boolean response object</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Result <p>Boolean response object</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置<p>Boolean response object</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _result <p>Boolean response object</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Approval number</p>
                     * @return ApprovalNo <p>Approval number</p>
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置<p>Approval number</p>
                     * @param _approvalNo <p>Approval number</p>
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
                     * <p>Boolean response object</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>Approval number</p>
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGAPPROVALRESP_H_
