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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTDESCRIPTION_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Description of the container reverse shell event at runtime
                */
                class ReverseShellEventDescription : public AbstractModel
                {
                public:
                    ReverseShellEventDescription();
                    ~ReverseShellEventDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return Solution Solution
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
                     * @param _solution Solution
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Destination address
                     * @return DstAddress Destination address
                     * 
                     */
                    std::string GetDstAddress() const;

                    /**
                     * 设置Destination address
                     * @param _dstAddress Destination address
                     * 
                     */
                    void SetDstAddress(const std::string& _dstAddress);

                    /**
                     * 判断参数 DstAddress 是否已赋值
                     * @return DstAddress 是否已赋值
                     * 
                     */
                    bool DstAddressHasBeenSet() const;

                    /**
                     * 获取Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperationTime Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operationTime Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                private:

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Destination address
                     */
                    std::string m_dstAddress;
                    bool m_dstAddressHasBeenSet;

                    /**
                     * Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTDESCRIPTION_H_
