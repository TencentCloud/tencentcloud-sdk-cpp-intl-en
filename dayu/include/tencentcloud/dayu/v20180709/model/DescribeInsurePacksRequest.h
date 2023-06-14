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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEINSUREPACKSREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEINSUREPACKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeInsurePacks request structure.
                */
                class DescribeInsurePacksRequest : public AbstractModel
                {
                public:
                    DescribeInsurePacksRequest();
                    ~DescribeInsurePacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Guarantee package ID, which is optional. If you need to get the guarantee package with a specified ID (such as insure-000000xe), please use this field
                     * @return IdList Guarantee package ID, which is optional. If you need to get the guarantee package with a specified ID (such as insure-000000xe), please use this field
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置Guarantee package ID, which is optional. If you need to get the guarantee package with a specified ID (such as insure-000000xe), please use this field
                     * @param _idList Guarantee package ID, which is optional. If you need to get the guarantee package with a specified ID (such as insure-000000xe), please use this field
                     * 
                     */
                    void SetIdList(const std::vector<std::string>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                private:

                    /**
                     * Guarantee package ID, which is optional. If you need to get the guarantee package with a specified ID (such as insure-000000xe), please use this field
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEINSUREPACKSREQUEST_H_
