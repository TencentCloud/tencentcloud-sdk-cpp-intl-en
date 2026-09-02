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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEASSOCIATEDASSETCOUNTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEASSOCIATEDASSETCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeImageAssociatedAssetCount request structure.
                */
                class DescribeImageAssociatedAssetCountRequest : public AbstractModel
                {
                public:
                    DescribeImageAssociatedAssetCountRequest();
                    ~DescribeImageAssociatedAssetCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Image ID.</p>
                     * @return Id <p>Image ID.</p>
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _id <p>Image ID.</p>
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Preview data mirroring Id</p>
                     * @return PreviewId <p>Preview data mirroring Id</p>
                     * 
                     */
                    std::vector<uint64_t> GetPreviewId() const;

                    /**
                     * 设置<p>Preview data mirroring Id</p>
                     * @param _previewId <p>Preview data mirroring Id</p>
                     * 
                     */
                    void SetPreviewId(const std::vector<uint64_t>& _previewId);

                    /**
                     * 判断参数 PreviewId 是否已赋值
                     * @return PreviewId 是否已赋值
                     * 
                     */
                    bool PreviewIdHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Preview data mirroring Id</p>
                     */
                    std::vector<uint64_t> m_previewId;
                    bool m_previewIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEASSOCIATEDASSETCOUNTREQUEST_H_
