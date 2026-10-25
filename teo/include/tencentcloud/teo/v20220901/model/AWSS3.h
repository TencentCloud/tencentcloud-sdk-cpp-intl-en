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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_AWSS3_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_AWSS3_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Destination information of the AWS S3 bucket. EdgeOne is authorized to deliver real-time logs to your AWS S3 bucket through an IAM role and an external ID, with no need to provide a long-term access key. For details, see [Delivering Logs to AWS S3](https://www.tencentcloud.com/document/product/1145/56251).
                */
                class AWSS3 : public AbstractModel
                {
                public:
                    AWSS3();
                    ~AWSS3() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service endpoint domain name of the AWS S3 bucket. For valid values, see [AWS Endpoints](https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints). Example: `s3.us-west-2.amazonaws.com`.
                     * @return Endpoint Service endpoint domain name of the AWS S3 bucket. For valid values, see [AWS Endpoints](https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints). Example: `s3.us-west-2.amazonaws.com`.
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置Service endpoint domain name of the AWS S3 bucket. For valid values, see [AWS Endpoints](https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints). Example: `s3.us-west-2.amazonaws.com`.
                     * @param _endpoint Service endpoint domain name of the AWS S3 bucket. For valid values, see [AWS Endpoints](https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints). Example: `s3.us-west-2.amazonaws.com`.
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取<p>Name of the AWS S3 bucket. You can view the bucket name in the Buckets list in the AWS S3 console.</p><p>It must be 3 to 63 characters in length, contain only lowercase letters, digits, periods (.), and hyphens (-), and start and end with a letter or a digit.</p>
                     * @return BucketName <p>Name of the AWS S3 bucket. You can view the bucket name in the Buckets list in the AWS S3 console.</p><p>It must be 3 to 63 characters in length, contain only lowercase letters, digits, periods (.), and hyphens (-), and start and end with a letter or a digit.</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>Name of the AWS S3 bucket. You can view the bucket name in the Buckets list in the AWS S3 console.</p><p>It must be 3 to 63 characters in length, contain only lowercase letters, digits, periods (.), and hyphens (-), and start and end with a letter or a digit.</p>
                     * @param _bucketName <p>Name of the AWS S3 bucket. You can view the bucket name in the Buckets list in the AWS S3 console.</p><p>It must be 3 to 63 characters in length, contain only lowercase letters, digits, periods (.), and hyphens (-), and start and end with a letter or a digit.</p>
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
                     * 获取<p>Directory path where log files are stored in the AWS S3 bucket. Multiple directory levels can be created by separating with `/`. It cannot contain relative path segments such as `./..`, and the total path length cannot exceed 1024 bytes.</p><p>If the directory path exists, it is used directly; if it does not exist, it is automatically created.</p><p>Directory names can only consist of letters, digits, and `!-_.*'()`.</p><p>Example: `eo-logs/l7-access-logs`.</p>
                     * @return Path <p>Directory path where log files are stored in the AWS S3 bucket. Multiple directory levels can be created by separating with `/`. It cannot contain relative path segments such as `./..`, and the total path length cannot exceed 1024 bytes.</p><p>If the directory path exists, it is used directly; if it does not exist, it is automatically created.</p><p>Directory names can only consist of letters, digits, and `!-_.*'()`.</p><p>Example: `eo-logs/l7-access-logs`.</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Directory path where log files are stored in the AWS S3 bucket. Multiple directory levels can be created by separating with `/`. It cannot contain relative path segments such as `./..`, and the total path length cannot exceed 1024 bytes.</p><p>If the directory path exists, it is used directly; if it does not exist, it is automatically created.</p><p>Directory names can only consist of letters, digits, and `!-_.*'()`.</p><p>Example: `eo-logs/l7-access-logs`.</p>
                     * @param _path <p>Directory path where log files are stored in the AWS S3 bucket. Multiple directory levels can be created by separating with `/`. It cannot contain relative path segments such as `./..`, and the total path length cannot exceed 1024 bytes.</p><p>If the directory path exists, it is used directly; if it does not exist, it is automatically created.</p><p>Directory names can only consist of letters, digits, and `!-_.*'()`.</p><p>Example: `eo-logs/l7-access-logs`.</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>ARN of the IAM role that authorizes EdgeOne to access the AWS S3 bucket.</p><p>You need to first create an IAM role in your AWS account that grants EdgeOne write permissions (for how to create it, see <a href="https://www.tencentcloud.com/document/product/1145/56251">Delivering Logs to AWS S3</a>). After creation, you can view and copy the ARN at the top of the role details page in the AWS IAM console.</p><p>Example: `arn:aws:iam::123456789012:role/eo-logs`.</p>
                     * @return RoleARN <p>ARN of the IAM role that authorizes EdgeOne to access the AWS S3 bucket.</p><p>You need to first create an IAM role in your AWS account that grants EdgeOne write permissions (for how to create it, see <a href="https://www.tencentcloud.com/document/product/1145/56251">Delivering Logs to AWS S3</a>). After creation, you can view and copy the ARN at the top of the role details page in the AWS IAM console.</p><p>Example: `arn:aws:iam::123456789012:role/eo-logs`.</p>
                     * 
                     */
                    std::string GetRoleARN() const;

                    /**
                     * 设置<p>ARN of the IAM role that authorizes EdgeOne to access the AWS S3 bucket.</p><p>You need to first create an IAM role in your AWS account that grants EdgeOne write permissions (for how to create it, see <a href="https://www.tencentcloud.com/document/product/1145/56251">Delivering Logs to AWS S3</a>). After creation, you can view and copy the ARN at the top of the role details page in the AWS IAM console.</p><p>Example: `arn:aws:iam::123456789012:role/eo-logs`.</p>
                     * @param _roleARN <p>ARN of the IAM role that authorizes EdgeOne to access the AWS S3 bucket.</p><p>You need to first create an IAM role in your AWS account that grants EdgeOne write permissions (for how to create it, see <a href="https://www.tencentcloud.com/document/product/1145/56251">Delivering Logs to AWS S3</a>). After creation, you can view and copy the ARN at the top of the role details page in the AWS IAM console.</p><p>Example: `arn:aws:iam::123456789012:role/eo-logs`.</p>
                     * 
                     */
                    void SetRoleARN(const std::string& _roleARN);

                    /**
                     * 判断参数 RoleARN 是否已赋值
                     * @return RoleARN 是否已赋值
                     * 
                     */
                    bool RoleARNHasBeenSet() const;

                    /**
                     * 获取<p>Data compression type. Valid values:</p><ul><li>`gzip`: gzip compression.</li></ul>If left empty, compression is disabled.
                     * @return CompressType <p>Data compression type. Valid values:</p><ul><li>`gzip`: gzip compression.</li></ul>If left empty, compression is disabled.
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置<p>Data compression type. Valid values:</p><ul><li>`gzip`: gzip compression.</li></ul>If left empty, compression is disabled.
                     * @param _compressType <p>Data compression type. Valid values:</p><ul><li>`gzip`: gzip compression.</li></ul>If left empty, compression is disabled.
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * Service endpoint domain name of the AWS S3 bucket. For valid values, see [AWS Endpoints](https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints). Example: `s3.us-west-2.amazonaws.com`.
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>Name of the AWS S3 bucket. You can view the bucket name in the Buckets list in the AWS S3 console.</p><p>It must be 3 to 63 characters in length, contain only lowercase letters, digits, periods (.), and hyphens (-), and start and end with a letter or a digit.</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>Directory path where log files are stored in the AWS S3 bucket. Multiple directory levels can be created by separating with `/`. It cannot contain relative path segments such as `./..`, and the total path length cannot exceed 1024 bytes.</p><p>If the directory path exists, it is used directly; if it does not exist, it is automatically created.</p><p>Directory names can only consist of letters, digits, and `!-_.*'()`.</p><p>Example: `eo-logs/l7-access-logs`.</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>ARN of the IAM role that authorizes EdgeOne to access the AWS S3 bucket.</p><p>You need to first create an IAM role in your AWS account that grants EdgeOne write permissions (for how to create it, see <a href="https://www.tencentcloud.com/document/product/1145/56251">Delivering Logs to AWS S3</a>). After creation, you can view and copy the ARN at the top of the role details page in the AWS IAM console.</p><p>Example: `arn:aws:iam::123456789012:role/eo-logs`.</p>
                     */
                    std::string m_roleARN;
                    bool m_roleARNHasBeenSet;

                    /**
                     * <p>Data compression type. Valid values:</p><ul><li>`gzip`: gzip compression.</li></ul>If left empty, compression is disabled.
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AWSS3_H_
