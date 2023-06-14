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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYASSETSTATUSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYASSETSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAssetImageRegistryAssetStatus response structure.
                */
                class DescribeAssetImageRegistryAssetStatusResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryAssetStatusResponse();
                    ~DescribeAssetImageRegistryAssetStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Update progress. Valid values: `doing` (updating); `success` (updated successfully); `failed` (failed to update).
                     * @return Status Update progress. Valid values: `doing` (updating); `success` (updated successfully); `failed` (failed to update).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Err Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErr() const;

                    /**
                     * 判断参数 Err 是否已赋值
                     * @return Err 是否已赋值
                     * 
                     */
                    bool ErrHasBeenSet() const;

                private:

                    /**
                     * Update progress. Valid values: `doing` (updating); `success` (updated successfully); `failed` (failed to update).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_err;
                    bool m_errHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYASSETSTATUSRESPONSE_H_
