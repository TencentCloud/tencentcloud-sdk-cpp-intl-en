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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESREQUEST_H_

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
                * ExportImages request structure.
                */
                class ExportImagesRequest : public AbstractModel
                {
                public:
                    ExportImagesRequest();
                    ~ExportImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取COS bucket name
                     * @return BucketName COS bucket name
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置COS bucket name
                     * @param _bucketName COS bucket name
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取List of image IDs
                     * @return ImageIds List of image IDs
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置List of image IDs
                     * @param _imageIds List of image IDs
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取Format of the exported image file. Valid values: `RAW`, `QCOW2`, `VHD` and `VMDK`. Default value: `RAW`.
                     * @return ExportFormat Format of the exported image file. Valid values: `RAW`, `QCOW2`, `VHD` and `VMDK`. Default value: `RAW`.
                     * 
                     */
                    std::string GetExportFormat() const;

                    /**
                     * 设置Format of the exported image file. Valid values: `RAW`, `QCOW2`, `VHD` and `VMDK`. Default value: `RAW`.
                     * @param _exportFormat Format of the exported image file. Valid values: `RAW`, `QCOW2`, `VHD` and `VMDK`. Default value: `RAW`.
                     * 
                     */
                    void SetExportFormat(const std::string& _exportFormat);

                    /**
                     * 判断参数 ExportFormat 是否已赋值
                     * @return ExportFormat 是否已赋值
                     * 
                     */
                    bool ExportFormatHasBeenSet() const;

                    /**
                     * 获取Prefix list of the name of exported files
                     * @return FileNamePrefixList Prefix list of the name of exported files
                     * 
                     */
                    std::vector<std::string> GetFileNamePrefixList() const;

                    /**
                     * 设置Prefix list of the name of exported files
                     * @param _fileNamePrefixList Prefix list of the name of exported files
                     * 
                     */
                    void SetFileNamePrefixList(const std::vector<std::string>& _fileNamePrefixList);

                    /**
                     * 判断参数 FileNamePrefixList 是否已赋值
                     * @return FileNamePrefixList 是否已赋值
                     * 
                     */
                    bool FileNamePrefixListHasBeenSet() const;

                    /**
                     * 获取Whether to export only the system disk
                     * @return OnlyExportRootDisk Whether to export only the system disk
                     * 
                     */
                    bool GetOnlyExportRootDisk() const;

                    /**
                     * 设置Whether to export only the system disk
                     * @param _onlyExportRootDisk Whether to export only the system disk
                     * 
                     */
                    void SetOnlyExportRootDisk(const bool& _onlyExportRootDisk);

                    /**
                     * 判断参数 OnlyExportRootDisk 是否已赋值
                     * @return OnlyExportRootDisk 是否已赋值
                     * 
                     */
                    bool OnlyExportRootDiskHasBeenSet() const;

                    /**
                     * 获取Check whether the image can be exported
                     * @return DryRun Check whether the image can be exported
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Check whether the image can be exported
                     * @param _dryRun Check whether the image can be exported
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Role name (Default: `CVM_QcsRole`). Before exporting the images, make sure the role exists, and it has write permission to COS.
                     * @return RoleName Role name (Default: `CVM_QcsRole`). Before exporting the images, make sure the role exists, and it has write permission to COS.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name (Default: `CVM_QcsRole`). Before exporting the images, make sure the role exists, and it has write permission to COS.
                     * @param _roleName Role name (Default: `CVM_QcsRole`). Before exporting the images, make sure the role exists, and it has write permission to COS.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * COS bucket name
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * List of image IDs
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * Format of the exported image file. Valid values: `RAW`, `QCOW2`, `VHD` and `VMDK`. Default value: `RAW`.
                     */
                    std::string m_exportFormat;
                    bool m_exportFormatHasBeenSet;

                    /**
                     * Prefix list of the name of exported files
                     */
                    std::vector<std::string> m_fileNamePrefixList;
                    bool m_fileNamePrefixListHasBeenSet;

                    /**
                     * Whether to export only the system disk
                     */
                    bool m_onlyExportRootDisk;
                    bool m_onlyExportRootDiskHasBeenSet;

                    /**
                     * Check whether the image can be exported
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Role name (Default: `CVM_QcsRole`). Before exporting the images, make sure the role exists, and it has write permission to COS.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESREQUEST_H_
