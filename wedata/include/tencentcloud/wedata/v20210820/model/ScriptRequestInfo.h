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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTREQUESTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTREQUESTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Development Space - Upload Script Request
                */
                class ScriptRequestInfo : public AbstractModel
                {
                public:
                    ScriptRequestInfo();
                    ~ScriptRequestInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Script path
Project area 1470575647377821696 project, under the f1 directory:
/datastudio/project/1470575647377821696/f1/sql1234.sql
Personal area:
/datastudio/personal/sqlTTT.sql
                     * @return FilePath Script path
Project area 1470575647377821696 project, under the f1 directory:
/datastudio/project/1470575647377821696/f1/sql1234.sql
Personal area:
/datastudio/personal/sqlTTT.sql
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置Script path
Project area 1470575647377821696 project, under the f1 directory:
/datastudio/project/1470575647377821696/f1/sql1234.sql
Personal area:
/datastudio/personal/sqlTTT.sql
                     * @param _filePath Script path
Project area 1470575647377821696 project, under the f1 directory:
/datastudio/project/1470575647377821696/f1/sql1234.sql
Personal area:
/datastudio/personal/sqlTTT.sql
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Script Version
                     * @return Version Script Version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Script Version
                     * @param _version Script Version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Operation Type
                     * @return Operation Operation Type
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation Type
                     * @param _operation Operation Type
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Additional Information
                     * @return ExtraInfo Additional Information
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置Additional Information
                     * @param _extraInfo Additional Information
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取Bucket Name
                     * @return BucketName Bucket Name
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Bucket Name
                     * @param _bucketName Bucket Name
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
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取File Extension Type
                     * @return FileExtensionType File Extension Type
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置File Extension Type
                     * @param _fileExtensionType File Extension Type
                     * 
                     */
                    void SetFileExtensionType(const std::string& _fileExtensionType);

                    /**
                     * 判断参数 FileExtensionType 是否已赋值
                     * @return FileExtensionType 是否已赋值
                     * 
                     */
                    bool FileExtensionTypeHasBeenSet() const;

                private:

                    /**
                     * Script path
Project area 1470575647377821696 project, under the f1 directory:
/datastudio/project/1470575647377821696/f1/sql1234.sql
Personal area:
/datastudio/personal/sqlTTT.sql
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Script Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Operation Type
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Additional Information
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Bucket Name
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * File Extension Type
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTREQUESTINFO_H_
