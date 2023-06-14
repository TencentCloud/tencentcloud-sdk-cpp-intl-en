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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPLOADBACKUPINFORESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPLOADBACKUPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeUploadBackupInfo response structure.
                */
                class DescribeUploadBackupInfoResponse : public AbstractModel
                {
                public:
                    DescribeUploadBackupInfoResponse();
                    ~DescribeUploadBackupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Bucket name
                     * @return BucketName Bucket name
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取Bucket location information
                     * @return Region Bucket location information
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Storage path
                     * @return Path Storage path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Temporary key ID
                     * @return TmpSecretId Temporary key ID
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取Temporary key (Key)
                     * @return TmpSecretKey Temporary key (Key)
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取Temporary key (Token)
                     * @return XCosSecurityToken Temporary key (Token)
                     * 
                     */
                    std::string GetXCosSecurityToken() const;

                    /**
                     * 判断参数 XCosSecurityToken 是否已赋值
                     * @return XCosSecurityToken 是否已赋值
                     * 
                     */
                    bool XCosSecurityTokenHasBeenSet() const;

                    /**
                     * 获取Temporary key start time
                     * @return StartTime Temporary key start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Temporary key expiration time
                     * @return ExpiredTime Temporary key expiration time
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * Bucket name
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Bucket location information
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Storage path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Temporary key ID
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * Temporary key (Key)
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * Temporary key (Token)
                     */
                    std::string m_xCosSecurityToken;
                    bool m_xCosSecurityTokenHasBeenSet;

                    /**
                     * Temporary key start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Temporary key expiration time
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPLOADBACKUPINFORESPONSE_H_
