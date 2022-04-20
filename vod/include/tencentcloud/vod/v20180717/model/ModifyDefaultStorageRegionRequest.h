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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYDEFAULTSTORAGEREGIONREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYDEFAULTSTORAGEREGIONREQUEST_H_

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
                * ModifyDefaultStorageRegion request structure.
                */
                class ModifyDefaultStorageRegionRequest : public AbstractModel
                {
                public:
                    ModifyDefaultStorageRegionRequest();
                    ~ModifyDefaultStorageRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The default storage region, which must be a region you have storage access to. You can use the `DescribeStorageRegions` API to query such regions.
                     * @return StorageRegion The default storage region, which must be a region you have storage access to. You can use the `DescribeStorageRegions` API to query such regions.
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置The default storage region, which must be a region you have storage access to. You can use the `DescribeStorageRegions` API to query such regions.
                     * @param StorageRegion The default storage region, which must be a region you have storage access to. You can use the `DescribeStorageRegions` API to query such regions.
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * @return SubAppId The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * @param SubAppId The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * The default storage region, which must be a region you have storage access to. You can use the `DescribeStorageRegions` API to query such regions.
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYDEFAULTSTORAGEREGIONREQUEST_H_
