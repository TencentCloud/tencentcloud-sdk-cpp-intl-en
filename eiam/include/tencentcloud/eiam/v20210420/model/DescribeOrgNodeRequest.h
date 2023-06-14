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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODEREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeOrgNode request structure.
                */
                class DescribeOrgNodeRequest : public AbstractModel
                {
                public:
                    DescribeOrgNodeRequest();
                    ~DescribeOrgNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization node ID, which is globally unique and can contain up to 64 characters. If this parameter is left empty, the information of the root organization node will be read by default.
                     * @return OrgNodeId Organization node ID, which is globally unique and can contain up to 64 characters. If this parameter is left empty, the information of the root organization node will be read by default.
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置Organization node ID, which is globally unique and can contain up to 64 characters. If this parameter is left empty, the information of the root organization node will be read by default.
                     * @param _orgNodeId Organization node ID, which is globally unique and can contain up to 64 characters. If this parameter is left empty, the information of the root organization node will be read by default.
                     * 
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Whether to read the information of its sub-nodes. When this parameter is left empty or specified as `false`, only the information of the current organization node will be read by default. When it is specified as `true`, the information of the current organization node and its level-1 sub-nodes will be read.
                     * @return IncludeOrgNodeChildInfo Whether to read the information of its sub-nodes. When this parameter is left empty or specified as `false`, only the information of the current organization node will be read by default. When it is specified as `true`, the information of the current organization node and its level-1 sub-nodes will be read.
                     * 
                     */
                    bool GetIncludeOrgNodeChildInfo() const;

                    /**
                     * 设置Whether to read the information of its sub-nodes. When this parameter is left empty or specified as `false`, only the information of the current organization node will be read by default. When it is specified as `true`, the information of the current organization node and its level-1 sub-nodes will be read.
                     * @param _includeOrgNodeChildInfo Whether to read the information of its sub-nodes. When this parameter is left empty or specified as `false`, only the information of the current organization node will be read by default. When it is specified as `true`, the information of the current organization node and its level-1 sub-nodes will be read.
                     * 
                     */
                    void SetIncludeOrgNodeChildInfo(const bool& _includeOrgNodeChildInfo);

                    /**
                     * 判断参数 IncludeOrgNodeChildInfo 是否已赋值
                     * @return IncludeOrgNodeChildInfo 是否已赋值
                     * 
                     */
                    bool IncludeOrgNodeChildInfoHasBeenSet() const;

                private:

                    /**
                     * Organization node ID, which is globally unique and can contain up to 64 characters. If this parameter is left empty, the information of the root organization node will be read by default.
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * Whether to read the information of its sub-nodes. When this parameter is left empty or specified as `false`, only the information of the current organization node will be read by default. When it is specified as `true`, the information of the current organization node and its level-1 sub-nodes will be read.
                     */
                    bool m_includeOrgNodeChildInfo;
                    bool m_includeOrgNodeChildInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODEREQUEST_H_
