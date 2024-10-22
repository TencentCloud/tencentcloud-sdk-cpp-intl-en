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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyImageSharePermission request structure.
                */
                class ModifyImageSharePermissionRequest : public AbstractModel
                {
                public:
                    ModifyImageSharePermissionRequest();
                    ~ModifyImageSharePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><br><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li><br>The image ID should correspond to an image in the `NORMAL` state. For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * @return ImageId Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><br><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li><br>The image ID should correspond to an image in the `NORMAL` state. For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><br><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li><br>The image ID should correspond to an image in the `NORMAL` state. For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * @param _imageId Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><br><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li><br>The image ID should correspond to an image in the `NORMAL` state. For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取ID list of root accounts receiving shared images. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). An account ID is different from a QQ number. For details on root account IDs, refer to the account ID section in [Account Information](https://console.cloud.tencent.com/developer).
                     * @return AccountIds ID list of root accounts receiving shared images. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). An account ID is different from a QQ number. For details on root account IDs, refer to the account ID section in [Account Information](https://console.cloud.tencent.com/developer).
                     * 
                     */
                    std::vector<std::string> GetAccountIds() const;

                    /**
                     * 设置ID list of root accounts receiving shared images. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). An account ID is different from a QQ number. For details on root account IDs, refer to the account ID section in [Account Information](https://console.cloud.tencent.com/developer).
                     * @param _accountIds ID list of root accounts receiving shared images. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). An account ID is different from a QQ number. For details on root account IDs, refer to the account ID section in [Account Information](https://console.cloud.tencent.com/developer).
                     * 
                     */
                    void SetAccountIds(const std::vector<std::string>& _accountIds);

                    /**
                     * 判断参数 AccountIds 是否已赋值
                     * @return AccountIds 是否已赋值
                     * 
                     */
                    bool AccountIdsHasBeenSet() const;

                    /**
                     * 获取Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     * @return Permission Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     * @param _permission Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><br><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li><br>The image ID should correspond to an image in the `NORMAL` state. For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * ID list of root accounts receiving shared images. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). An account ID is different from a QQ number. For details on root account IDs, refer to the account ID section in [Account Information](https://console.cloud.tencent.com/developer).
                     */
                    std::vector<std::string> m_accountIds;
                    bool m_accountIdsHasBeenSet;

                    /**
                     * Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
