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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSMARKINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSMARKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCosMarkInfo request structure.
                */
                class ModifyCosMarkInfoRequest : public AbstractModel
                {
                public:
                    ModifyCosMarkInfoRequest();
                    ~ModifyCosMarkInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Bucket list that needs to be modified
                     * @return BucketNameSet Bucket list that needs to be modified
                     * 
                     */
                    std::vector<CosBucketInfo> GetBucketNameSet() const;

                    /**
                     * 设置Bucket list that needs to be modified
                     * @param _bucketNameSet Bucket list that needs to be modified
                     * 
                     */
                    void SetBucketNameSet(const std::vector<CosBucketInfo>& _bucketNameSet);

                    /**
                     * 判断参数 BucketNameSet 是否已赋值
                     * @return BucketNameSet 是否已赋值
                     * 
                     */
                    bool BucketNameSetHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return MarkInfo Remarks
                     * 
                     */
                    std::string GetMarkInfo() const;

                    /**
                     * 设置Remarks
                     * @param _markInfo Remarks
                     * 
                     */
                    void SetMarkInfo(const std::string& _markInfo);

                    /**
                     * 判断参数 MarkInfo 是否已赋值
                     * @return MarkInfo 是否已赋值
                     * 
                     */
                    bool MarkInfoHasBeenSet() const;

                private:

                    /**
                     * Bucket list that needs to be modified
                     */
                    std::vector<CosBucketInfo> m_bucketNameSet;
                    bool m_bucketNameSetHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_markInfo;
                    bool m_markInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSMARKINFOREQUEST_H_
