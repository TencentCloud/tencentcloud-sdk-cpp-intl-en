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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_KVPAIR_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_KVPAIR_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Key-value pair
                */
                class KVPair : public AbstractModel
                {
                public:
                    KVPair();
                    ~KVPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key name


                     * @return K Key name


                     * 
                     */
                    std::string GetK() const;

                    /**
                     * 设置Key name


                     * @param _k Key name


                     * 
                     */
                    void SetK(const std::string& _k);

                    /**
                     * 判断参数 K 是否已赋值
                     * @return K 是否已赋值
                     * 
                     */
                    bool KHasBeenSet() const;

                    /**
                     * 获取The value. do not pass SQL (the request will be deemed as an attack on the api). if needed, transcode the SQL with Base64 and decode it.

                     * @return V The value. do not pass SQL (the request will be deemed as an attack on the api). if needed, transcode the SQL with Base64 and decode it.

                     * 
                     */
                    std::string GetV() const;

                    /**
                     * 设置The value. do not pass SQL (the request will be deemed as an attack on the api). if needed, transcode the SQL with Base64 and decode it.

                     * @param _v The value. do not pass SQL (the request will be deemed as an attack on the api). if needed, transcode the SQL with Base64 and decode it.

                     * 
                     */
                    void SetV(const std::string& _v);

                    /**
                     * 判断参数 V 是否已赋值
                     * @return V 是否已赋值
                     * 
                     */
                    bool VHasBeenSet() const;

                private:

                    /**
                     * Key name


                     */
                    std::string m_k;
                    bool m_kHasBeenSet;

                    /**
                     * The value. do not pass SQL (the request will be deemed as an attack on the api). if needed, transcode the SQL with Base64 and decode it.

                     */
                    std::string m_v;
                    bool m_vHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_KVPAIR_H_
