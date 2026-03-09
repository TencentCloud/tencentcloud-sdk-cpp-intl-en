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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DELETEREGISTERCODESREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DELETEREGISTERCODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeleteRegisterCodes request structure.
                */
                class DeleteRegisterCodesRequest : public AbstractModel
                {
                public:
                    DeleteRegisterCodesRequest();
                    ~DeleteRegisterCodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Registration code ID list. limits the input registration code ID quantity to more than 0 and less than 100.

Call the [DescribeRegisterCodes](https://www.tencentcloud.comom/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
                     * @return RegisterCodeIds Registration code ID list. limits the input registration code ID quantity to more than 0 and less than 100.

Call the [DescribeRegisterCodes](https://www.tencentcloud.comom/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
                     * 
                     */
                    std::vector<std::string> GetRegisterCodeIds() const;

                    /**
                     * 设置Registration code ID list. limits the input registration code ID quantity to more than 0 and less than 100.

Call the [DescribeRegisterCodes](https://www.tencentcloud.comom/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
                     * @param _registerCodeIds Registration code ID list. limits the input registration code ID quantity to more than 0 and less than 100.

Call the [DescribeRegisterCodes](https://www.tencentcloud.comom/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
                     * 
                     */
                    void SetRegisterCodeIds(const std::vector<std::string>& _registerCodeIds);

                    /**
                     * 判断参数 RegisterCodeIds 是否已赋值
                     * @return RegisterCodeIds 是否已赋值
                     * 
                     */
                    bool RegisterCodeIdsHasBeenSet() const;

                private:

                    /**
                     * Registration code ID list. limits the input registration code ID quantity to more than 0 and less than 100.

Call the [DescribeRegisterCodes](https://www.tencentcloud.comom/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
                     */
                    std::vector<std::string> m_registerCodeIds;
                    bool m_registerCodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DELETEREGISTERCODESREQUEST_H_
