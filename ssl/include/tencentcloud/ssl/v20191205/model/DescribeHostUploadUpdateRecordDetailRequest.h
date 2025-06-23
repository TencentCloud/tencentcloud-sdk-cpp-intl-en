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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostUploadUpdateRecordDetail request structure.
                */
                class DescribeHostUploadUpdateRecordDetailRequest : public AbstractModel
                {
                public:
                    DescribeHostUploadUpdateRecordDetailRequest();
                    ~DescribeHostUploadUpdateRecordDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Hosting record ID.
                     * @return DeployRecordId Hosting record ID.
                     * 
                     */
                    int64_t GetDeployRecordId() const;

                    /**
                     * 设置Hosting record ID.
                     * @param _deployRecordId Hosting record ID.
                     * 
                     */
                    void SetDeployRecordId(const int64_t& _deployRecordId);

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                    /**
                     * 获取Number of items per page. default is 10, maximum is 200. exceeds 200 will be set to 200.
                     * @return Limit Number of items per page. default is 10, maximum is 200. exceeds 200 will be set to 200.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. default is 10, maximum is 200. exceeds 200 will be set to 200.
                     * @param _limit Number of items per page. default is 10, maximum is 200. exceeds 200 will be set to 200.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Hosting record ID.
                     */
                    int64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * Number of items per page. default is 10, maximum is 200. exceeds 200 will be set to 200.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILREQUEST_H_
