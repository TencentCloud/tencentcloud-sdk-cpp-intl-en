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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTCOS_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTCOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * COS bucket parameters for storing whiteboard snapshots.
                */
                class SnapshotCOS : public AbstractModel
                {
                public:
                    SnapshotCOS();
                    ~SnapshotCOS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UIN of the Tencent Cloud account.
                     * @return Uin UIN of the Tencent Cloud account.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置UIN of the Tencent Cloud account.
                     * @param _uin UIN of the Tencent Cloud account.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取COS region.
                     * @return Region COS region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置COS region.
                     * @param _region COS region.
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
                     * 获取COS bucket name.
                     * @return Bucket COS bucket name.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket name.
                     * @param _bucket COS bucket name.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Root directory for storing whiteboard snapshots.
                     * @return TargetDir Root directory for storing whiteboard snapshots.
                     * 
                     */
                    std::string GetTargetDir() const;

                    /**
                     * 设置Root directory for storing whiteboard snapshots.
                     * @param _targetDir Root directory for storing whiteboard snapshots.
                     * 
                     */
                    void SetTargetDir(const std::string& _targetDir);

                    /**
                     * 判断参数 TargetDir 是否已赋值
                     * @return TargetDir 是否已赋值
                     * 
                     */
                    bool TargetDirHasBeenSet() const;

                    /**
                     * 获取CDN acceleration domain name.
                     * @return Domain CDN acceleration domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置CDN acceleration domain name.
                     * @param _domain CDN acceleration domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * UIN of the Tencent Cloud account.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * COS region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * COS bucket name.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Root directory for storing whiteboard snapshots.
                     */
                    std::string m_targetDir;
                    bool m_targetDirHasBeenSet;

                    /**
                     * CDN acceleration domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTCOS_H_
