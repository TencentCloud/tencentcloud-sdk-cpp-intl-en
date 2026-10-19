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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIPINVOKERECORDDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIPINVOKERECORDDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosInvokeDetailInfo.h>
#include <tencentcloud/csip/v20221121/model/CosPermissionInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeIpInvokeRecordDetail response structure.
                */
                class DescribeIpInvokeRecordDetailResponse : public AbstractModel
                {
                public:
                    DescribeIpInvokeRecordDetailResponse();
                    ~DescribeIpInvokeRecordDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Call details
                     * @return InvokeDetailInfo Call details
                     * 
                     */
                    std::vector<CosInvokeDetailInfo> GetInvokeDetailInfo() const;

                    /**
                     * 判断参数 InvokeDetailInfo 是否已赋值
                     * @return InvokeDetailInfo 是否已赋值
                     * 
                     */
                    bool InvokeDetailInfoHasBeenSet() const;

                    /**
                     * 获取Call permission related
                     * @return InvokePermission Call permission related
                     * 
                     */
                    std::vector<CosPermissionInfo> GetInvokePermission() const;

                    /**
                     * 判断参数 InvokePermission 是否已赋值
                     * @return InvokePermission 是否已赋值
                     * 
                     */
                    bool InvokePermissionHasBeenSet() const;

                private:

                    /**
                     * Call details
                     */
                    std::vector<CosInvokeDetailInfo> m_invokeDetailInfo;
                    bool m_invokeDetailInfoHasBeenSet;

                    /**
                     * Call permission related
                     */
                    std::vector<CosPermissionInfo> m_invokePermission;
                    bool m_invokePermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIPINVOKERECORDDETAILRESPONSE_H_
