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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SCFINSTANCELIST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SCFINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/SCFInstanceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * SCF Instance Details - Asynchronous Associate Cloud Resources Data Structure
                */
                class SCFInstanceList : public AbstractModel
                {
                public:
                    SCFInstanceList();
                    ~SCFInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
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
                     * 获取<p>SCF instance details</p>
                     * @return InstanceList <p>SCF instance details</p>
                     * 
                     */
                    std::vector<SCFInstanceDetail> GetInstanceList() const;

                    /**
                     * 设置<p>SCF instance details</p>
                     * @param _instanceList <p>SCF instance details</p>
                     * 
                     */
                    void SetInstanceList(const std::vector<SCFInstanceDetail>& _instanceList);

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取<p>Error message</p>
                     * @return Error <p>Error message</p>
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置<p>Error message</p>
                     * @param _error <p>Error message</p>
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取<p>Total count in the region</p>
                     * @return TotalCount <p>Total count in the region</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total count in the region</p>
                     * @param _totalCount <p>Total count in the region</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>SCF instance details</p>
                     */
                    std::vector<SCFInstanceDetail> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * <p>Error message</p>
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * <p>Total count in the region</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SCFINSTANCELIST_H_
