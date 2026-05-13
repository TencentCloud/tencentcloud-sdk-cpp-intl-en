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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_APPLYDISKBACKUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_APPLYDISKBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ApplyDiskBackup request structure.
                */
                class ApplyDiskBackupRequest : public AbstractModel
                {
                public:
                    ApplyDiskBackupRequest();
                    ~ApplyDiskBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud disk backup point ID. can be queried through the [DescribeDiskBackups](https://www.tencentcloud.com/document/product/362/80278?from_cn_redirect=1) api.
                     * @return DiskBackupId Cloud disk backup point ID. can be queried through the [DescribeDiskBackups](https://www.tencentcloud.com/document/product/362/80278?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetDiskBackupId() const;

                    /**
                     * 设置Cloud disk backup point ID. can be queried through the [DescribeDiskBackups](https://www.tencentcloud.com/document/product/362/80278?from_cn_redirect=1) api.
                     * @param _diskBackupId Cloud disk backup point ID. can be queried through the [DescribeDiskBackups](https://www.tencentcloud.com/document/product/362/80278?from_cn_redirect=1) api.
                     * 
                     */
                    void SetDiskBackupId(const std::string& _diskBackupId);

                    /**
                     * 判断参数 DiskBackupId 是否已赋值
                     * @return DiskBackupId 是否已赋值
                     * 
                     */
                    bool DiskBackupIdHasBeenSet() const;

                    /**
                     * 获取Original cloud disk ID of the backup point. can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api.
                     * @return DiskId Original cloud disk ID of the backup point. can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Original cloud disk ID of the backup point. can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api.
                     * @param _diskId Original cloud disk ID of the backup point. can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable automatic shutdown before rolling back the CBS backup point. defaults to FALSE, which means no automatic shutdown.
                     * @return AutoStopInstance Specifies whether to enable automatic shutdown before rolling back the CBS backup point. defaults to FALSE, which means no automatic shutdown.
                     * 
                     */
                    bool GetAutoStopInstance() const;

                    /**
                     * 设置Specifies whether to enable automatic shutdown before rolling back the CBS backup point. defaults to FALSE, which means no automatic shutdown.
                     * @param _autoStopInstance Specifies whether to enable automatic shutdown before rolling back the CBS backup point. defaults to FALSE, which means no automatic shutdown.
                     * 
                     */
                    void SetAutoStopInstance(const bool& _autoStopInstance);

                    /**
                     * 判断参数 AutoStopInstance 是否已赋值
                     * @return AutoStopInstance 是否已赋值
                     * 
                     */
                    bool AutoStopInstanceHasBeenSet() const;

                    /**
                     * 获取Whether to automatically start after rolling back the cloud disk backup point, default to FALSE, means do not auto boot. the AutoStartInstance parameter can only be set to true when AutoStopInstance is true.
                     * @return AutoStartInstance Whether to automatically start after rolling back the cloud disk backup point, default to FALSE, means do not auto boot. the AutoStartInstance parameter can only be set to true when AutoStopInstance is true.
                     * 
                     */
                    bool GetAutoStartInstance() const;

                    /**
                     * 设置Whether to automatically start after rolling back the cloud disk backup point, default to FALSE, means do not auto boot. the AutoStartInstance parameter can only be set to true when AutoStopInstance is true.
                     * @param _autoStartInstance Whether to automatically start after rolling back the cloud disk backup point, default to FALSE, means do not auto boot. the AutoStartInstance parameter can only be set to true when AutoStopInstance is true.
                     * 
                     */
                    void SetAutoStartInstance(const bool& _autoStartInstance);

                    /**
                     * 判断参数 AutoStartInstance 是否已赋值
                     * @return AutoStartInstance 是否已赋值
                     * 
                     */
                    bool AutoStartInstanceHasBeenSet() const;

                private:

                    /**
                     * Cloud disk backup point ID. can be queried through the [DescribeDiskBackups](https://www.tencentcloud.com/document/product/362/80278?from_cn_redirect=1) api.
                     */
                    std::string m_diskBackupId;
                    bool m_diskBackupIdHasBeenSet;

                    /**
                     * Original cloud disk ID of the backup point. can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Specifies whether to enable automatic shutdown before rolling back the CBS backup point. defaults to FALSE, which means no automatic shutdown.
                     */
                    bool m_autoStopInstance;
                    bool m_autoStopInstanceHasBeenSet;

                    /**
                     * Whether to automatically start after rolling back the cloud disk backup point, default to FALSE, means do not auto boot. the AutoStartInstance parameter can only be set to true when AutoStopInstance is true.
                     */
                    bool m_autoStartInstance;
                    bool m_autoStartInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_APPLYDISKBACKUPREQUEST_H_
