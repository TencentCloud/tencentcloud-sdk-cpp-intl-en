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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CommitUpload request structure.
                */
                class CommitUploadRequest : public AbstractModel
                {
                public:
                    CommitUploadRequest();
                    ~CommitUploadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VOD session, which takes the returned value (VodSessionKey) of the `ApplyUpload` API.
                     * @return VodSessionKey VOD session, which takes the returned value (VodSessionKey) of the `ApplyUpload` API.
                     */
                    std::string GetVodSessionKey() const;

                    /**
                     * 设置VOD session, which takes the returned value (VodSessionKey) of the `ApplyUpload` API.
                     * @param VodSessionKey VOD session, which takes the returned value (VodSessionKey) of the `ApplyUpload` API.
                     */
                    void SetVodSessionKey(const std::string& _vodSessionKey);

                    /**
                     * 判断参数 VodSessionKey 是否已赋值
                     * @return VodSessionKey 是否已赋值
                     */
                    bool VodSessionKeyHasBeenSet() const;

                    /**
                     * 获取[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * VOD session, which takes the returned value (VodSessionKey) of the `ApplyUpload` API.
                     */
                    std::string m_vodSessionKey;
                    bool m_vodSessionKeyHasBeenSet;

                    /**
                     * [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADREQUEST_H_
